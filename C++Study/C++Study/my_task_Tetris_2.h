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
	int blockX = 0;      //��������� ���� ��ġ�� ����� ����
	int blockY = 0;

	float elapsed = 0.0f;

	void init() {
		//���ʿ� ���� ������ �ʱ�ȭ �ϴ� ������ �ô´�.
	}
	void next(float dt, char keyboardInput) {
		//blockY++;
		elapsed = elapsed + dt;      //elapsed += dt; 
		if (elapsed >= 0.5f) {
			if (canGoDown()) {
				blockY++;
			}
			else {// �� �������� ������ userBlock�� gameGridData�� ����
				trans();
			}
			elapsed = elapsed - 0.5f;   //elapsed -= dt; 
		}
	}

	//����� �Ʒ��� ������ �� �ֳ�
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

	//����� �������� �� �� �ֳ�
	bool canGoLeft() {
		return true;
	}
	//����� ���������� �� �� �ֳ�
	bool canGoRight() {
		return true;
	}

	void trans() {
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				gameGridData[i + blockY][k + blockX] = userBlock[i][k] == 1 ? userBlock[i][k] : gameGridData[i + blockY][k + blockX];
			}
		}
		// todo:�� ���� ���� �� �ִ��� Ȯ��

		// ���ο� ��� ����
		makeUserBlock();
	}


	void makeUserBlock() {
		blockX = 0;
		blockY = 0;

		// todo: ������ ���ؼ� ���ο� ����� �����.
	}


	//���� ���� �����͸� ȭ�鿡 ����� �� �ִ� �����ͷ� �ٲ��ִ� �Լ�
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