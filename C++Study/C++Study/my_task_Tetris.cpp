// 60fps

#include "my_task_Tetris_2.h"

#define INTERVAL 1.0/60.0

// clock 타임 : 프로그램이 시작된 시간.


int main() {

	float prev = (float)clock() / CLOCKS_PER_SEC;
	Display* display = new Display();
	GameEngine* gameEngine = new GameEngine();      ///1
	showConsoleCursor(false);

	while (true) {
		float curr = (float)clock() / CLOCKS_PER_SEC;
		float dt = curr - prev;

		if (dt < INTERVAL)   continue;
		prev = curr;

		//printf("%.3f\n", curr);

		bool left = keyState('a');
		bool right = keyState('d');
		bool down = keyState('s');
		if (left) {
			//왼쪽으로 블록 이동
			gameEngine->next(dt, 'a');
		}
		else if (right) {
			//오른쪽으로 블록 이동
			gameEngine->next(dt, 'd');
		}
		else if (down) {
			//빨리 떨어지게
			gameEngine->next(dt, 's');
		}
		else {
			// 그냥 블록 떨어지게
			gameEngine->next(dt, 0);            ///3
		}


		//화면 출력
		gameEngine->makeDisplayData();   /////2
		display->draw();

		//게임 상태 판별
	}

	return 0;
}