#define _CRT_SECURE_NO_WARNINGS

#include "my_task_Tetris.h"
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>


#define GRID_WIDTH 7
#define GRID_HEIGHT 10

// �迭�� x,y�� �ݴ��̴� ������ �ڿ������� ä������ ������
int displayData[GRID_HEIGHT][GRID_WIDTH] = { 0, };