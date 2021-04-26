// 60fps

#include "my_task_Tetris_2.h"

#define INTERVAL 1.0/60.0

// clock 타임 : 프로그램이 시작된 시간.

int main() {

	float prev = (float)clock() / CLOCKS_PER_SEC;


	while (true) {
		float curr = (float)clock() / CLOCKS_PER_SEC;
		float dt = curr - prev;

		if (dt < INTERVAL) continue;
		prev = curr;

		printf("%.3f\n", curr);


		bool left = keyState('a');
		if (left) {
			// 왼쪽으로 블록 이동
		}
		else {
			// 그냥 블록 떨어지게
		}
		// 화면 출력
		// 게임상태 판별
		bool right = keyState('d');
	}


	return 0;
}