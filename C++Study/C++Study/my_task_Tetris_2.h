#define _CRT_SECURE_NO_WARNINGS

#include "my_task_Tetris.h"
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>


#define GRID_WIDTH 7
#define GRID_HEIGHT 10
#define USERBLOCK_SIZE 3

int displayData[GRID_HEIGHT][GRID_WIDTH] = { 0, };

class Display {
public:
	void draw() {
		for (int i = 0; i < GRID_HEIGHT; i++) {
			for (int k = 0; k < GRID_WIDTH; k++) {
				if (displayData[i][k] == 0) {
					drawPosition(k, i, false);
				}
				else {
					drawPosition(k, i, true);
				}
			}
		}
	}
};

class GameEngine {
public:
	enum class GameState {
		PLAYING,GAMEOVER
	};

	GameState state = GameState::PLAYING;


	int gameGridData[GRID_HEIGHT][GRID_WIDTH] = {
		{0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0},
	};
	int userBlock[USERBLOCK_SIZE][USERBLOCK_SIZE] = { 0, };


	int userBlockVarious[3][USERBLOCK_SIZE][USERBLOCK_SIZE] = {
		{
			{0,0,1},
			{0,0,1},
			{0,0,1}
		},
		{
			{0,0,0},
			{0,1,1},
			{0,1,1}
		},
		{
			{1,0,0},
			{1,1,1},
			{0,0,0}
		},
	};


	int blockX = 0;      //유저블록의 현재 위치를 기억할 변수
	int blockY = 0;

	float elapsed = 0.0f;
	float controlCheck = 0.0f;

	void init() {
		//최초에 게임 엔진을 초기화 하는 과정을 맡는다.
		makeUserBlock();
	}
	void next(float dt, char keyboardInput) {
		//blockY++;

		if (state == GameState::GAMEOVER) {
			return;
		}

		elapsed = elapsed + dt;      //elapsed += dt; 
		if (elapsed >= 0.5f) {
			if (canGoDown()) {
				blockY++;
			}
			else {// 더 내려갈수 없으면 userBlock을 gameGridData에 전사
				trans();
				if (gameOverDecision()) state = GameState::GAMEOVER;
			}
			elapsed = elapsed - 0.5f;   //elapsed -= dt; 
		}

		controlCheck = controlCheck + dt;

		if (keyboardInput == 'a' && canGoLeft() && controlCheck > 0.1) {
			blockX--;
			controlCheck = 0.0f;
		}
		if (keyboardInput == 'd' && canGoRight() && controlCheck > 0.1) {
			blockX++;
			controlCheck = 0.0f;
		}
		if (keyboardInput == 's' && canGoDown() && controlCheck > 0.1) {
			blockY++;
			controlCheck = 0.0f;
		}
	}

	//블록이 아래로 내려갈 수 있냐
	bool canGoDown() {
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				if (userBlock[i][k] == 1 && i + blockY + 1 >= GRID_HEIGHT)
					return false;
				if (userBlock[i][k] == 1 && gameGridData[i + blockY + 1][k + blockX] == 1)
					return false;
			}
		}
		return true;
	}

	//블록이 왼쪽으로 갈 수 있냐
	bool canGoLeft() {
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				if (userBlock[i][k] == 1 && k + blockX - 1 < 0){
					return false;
				}
				if (userBlock[i][k] == 1 && gameGridData[i + blockY][k + blockX - 1] == 1) {
					return false;
				}
			}
		}
		return true;
	}
	//블록이 오른쪽으로 갈 수 있냐
	bool canGoRight() {
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				if (userBlock[i][k] == 1 && k + blockX + 1 > GRID_WIDTH -1) {
					return false;
				}
				if (userBlock[i][k] == 1 && gameGridData[i + blockY][k + blockX + 1]) {
					return false;
				}
			}
		}
		return true;
	}

	bool isLineFilled(int y) {
		for (int i = 0; i < GRID_WIDTH; i++) {
			if (gameGridData[y][i] == 0) return false;
		}
		return true;
	}

	void eraseLine(int y) {
		for (int i = 0; i < GRID_WIDTH; i++) {
			gameGridData[y][i] = 0;
		}
	}

	void drop(int y) { // y좌표를 기준으로 한칸씩 아래로 내림
		for (int i = y; i >= 0; i--) {
			for (int k = 0; k < GRID_WIDTH; k++) {
				gameGridData[i][k] = i - 1 < 0 ? 0 : gameGridData[i - 1][k];
			}
		}
	}

	void trans() {
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				gameGridData[i + blockY][k + blockX] = userBlock[i][k] == 1 ? userBlock[i][k] : gameGridData[i + blockY][k + blockX];
			}
		}
		// 한 줄이 가득 차 있는지 확인
		for (int i = 0; i < GRID_HEIGHT; i++) {
			if (isLineFilled(i)) {
				eraseLine(i);
				drop(i);
			}
		}

		
		// 새로운 블록 생성
		makeUserBlock();
	}

	bool gameOverDecision() {
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				if (userBlock[i][k] == 1 && gameGridData[i + blockY][k + blockX] == 1) {
					return true;
				}
			}
		}
		return false;
	}


	void makeUserBlock() {
		blockX = GRID_WIDTH / 2 - USERBLOCK_SIZE / 2;
		blockY = 0;

		// 랜덤을 통해서 새로운 블록을 만든다.
		//srand(time(0));

		int various = rand() % 3;
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				userBlock[i][k] = userBlockVarious[various][i][k];
			}
		}
	}


	void rotate() {
		//todo : 회전 구현
	}

	//실제 게임 데이터를 화면에 출력할 수 있는 데이터로 바꿔주는 함수
	void makeDisplayData() {
		for (int i = 0; i < GRID_HEIGHT; i++) {
			for (int k = 0; k < GRID_WIDTH; k++) {
				displayData[i][k] = gameGridData[i][k];
			}
		}

		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				if (i + blockY < 0 || i + blockY > GRID_HEIGHT) {
					//DO NOTHING
				}
				else if (k + blockX < 0 || k + blockX > GRID_WIDTH) {
					//DO NOTHING
				}
				else {
					///displayData[i + blockY][k + blockX] = userBlock[i][k] == 1 ? userBlock[i][k] : displayData[i + blockY][k+ blockX];
					int _x = k + blockX;
					int _y = i + blockY;

					displayData[_y][_x] = userBlock[i][k] | displayData[_y][_x];
				}
			}
		}
	}
};