#define _CRT_SECURE_NO_WARNINGS

#include "my_task_Tetris.h"
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>


#define GRID_WIDTH 7
#define GRID_HEIGHT 10

// 배열은 x,y가 반대이다 이유는 뒤에서부터 채워지기 때문에
int displayData[GRID_HEIGHT][GRID_WIDTH] = { 0, };