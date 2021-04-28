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

// 배열은 x,y가 반대이다 이유는 뒤에서부터 채워지기 때문에
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

// 위의 Display와 밑의 Display와 같은 코드임

//class Display {
//public:
//	void draw() {
//		for (int i = 0; i < GRID_HEIGHT; i++) {
//			for (int k = 0; k < GRID_WIDTH; k++) {
//				drawPosition(k, i, displayData[i][k] == 1);
//			}
//		}
//	}
//};




class GameEngine {
public:
	int gameGridData[GRID_HEIGHT][GRID_WIDTH] = { 0, };
	int userBlock[USERBLOCK_SIZE][USERBLOCK_SIZE] = { 
		{1,1,1},
		{0,0,1},
		{0,0,1}
	};
	int blockX = 0;
	int blockY = 0;

	void init() {
		// 최초에 게임엔진을 초기화 하는 과정
	}

	void next(float dt, char keyboardInput) {
		// 키보드 입력값을 받아와서 어떤 일을 할지 결정(while 루프에서 매번 불려진다.)
		blockY++;
	}

	void makeDisplayData() {	// 실제 게임 데이터를 화면에 출력할 수 있는 데이터로 바꿔준다.
		for (int i = 0; i < GRID_HEIGHT; i++) {
			for (int k = 0; i < GRID_WIDTH; k++) {
				displayData[i][k] = gameGridData[i][k];
			}
		}
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				if (i + blockY < 0 || i + blockY > GRID_HEIGHT) {
					// do nothing
				}
				else if (k + blockX < 0 || k + blockX > GRID_WIDTH) {
					// do nothing
				}
				else { //todo : 
					displayData[i + blockY][k + blockX] = userBlock[i][k];
				}
			}
		}
	}

};