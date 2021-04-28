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

// �迭�� x,y�� �ݴ��̴� ������ �ڿ������� ä������ ������
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

// ���� Display�� ���� Display�� ���� �ڵ���

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
		// ���ʿ� ���ӿ����� �ʱ�ȭ �ϴ� ����
	}

	void next(float dt, char keyboardInput) {
		// Ű���� �Է°��� �޾ƿͼ� � ���� ���� ����(while �������� �Ź� �ҷ�����.)
		blockY++;
	}

	void makeDisplayData() {	// ���� ���� �����͸� ȭ�鿡 ����� �� �ִ� �����ͷ� �ٲ��ش�.
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