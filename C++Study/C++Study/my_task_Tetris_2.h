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
	int userBlock[USERBLOCK_SIZE][USERBLOCK_SIZE] = {
		{1, 1, 1},
		{0, 0, 1},
		{0, 0, 1}
	};
	int blockX = 0;      //유저블록의 현재 위치를 기억할 변수
	int blockY = 0;

	float elapsed = 0.0f;

	void init() {
		//최초에 게임 엔진을 초기화 하는 과정을 맡는다.
	}
	void next(float dt, char keyboardInput) {
		//blockY++;
		elapsed = elapsed + dt;      //elapsed += dt; 
		if (elapsed >= 0.5f) {
			if (canGoDown()) {
				blockY++;
			}
			else {// 더 내려갈수 없으면 userBlock을 gameGridData에 전사
				trans();
			}
			elapsed = elapsed - 0.5f;   //elapsed -= dt; 
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
		return true;
	}
	//블록이 오른쪽으로 갈 수 있냐
	bool canGoRight() {
		return true;
	}

	void trans() {
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				gameGridData[i + blockY][k + blockX] = userBlock[i][k] == 1 ? userBlock[i][k] : gameGridData[i + blockY][k + blockX];
			}
		}
		// todo:한 줄이 가득 차 있는지 확인

		// 새로운 블록 생성
		makeUserBlock();
	}


	void makeUserBlock() {
		blockX = 0;
		blockY = 0;

		// todo: 랜덤을 통해서 새로운 블록을 만든다.
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