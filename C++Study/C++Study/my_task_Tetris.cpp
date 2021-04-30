// 60fps

#include "my_task_Tetris_2.h"

#define INTERVAL 1.0/60.0

// clock Ÿ�� : ���α׷��� ���۵� �ð�.


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
			//�������� ��� �̵�
			gameEngine->next(dt, 'a');
		}
		else if (right) {
			//���������� ��� �̵�
			gameEngine->next(dt, 'd');
		}
		else if (down) {
			//���� ��������
			gameEngine->next(dt, 's');
		}
		else {
			// �׳� ��� ��������
			gameEngine->next(dt, 0);            ///3
		}


		//ȭ�� ���
		gameEngine->makeDisplayData();   /////2
		display->draw();

		//���� ���� �Ǻ�
	}

	return 0;
}