// 60fps

#include "my_task_Tetris_2.h"

#define INTERVAL 1.0/60.0

// clock Ÿ�� : ���α׷��� ���۵� �ð�.

int main() {

	float prev = (float)clock() / CLOCKS_PER_SEC;

	Display* display = new Display;
	GameEngine* gameengine = new GameEngine();


	showConsoleCursor(false);


	while (true) {
		float curr = (float)clock() / CLOCKS_PER_SEC;
		float dt = curr - prev;

		if (dt < INTERVAL) continue;
		prev = curr;

		// printf("%.3f\n", curr);


		bool left = keyState('a');
		if (left) {
			// �������� ��� �̵�
		}
		else {
			// �׳� ��� ��������
		}

		gameengine->next(dt, 0);


		// ȭ�� ���
		gameengine->makeDisplayData();
		display->draw();
		
		// ���ӻ��� �Ǻ�



		// bool right = keyState('d');
	}



	return 0;
}