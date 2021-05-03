// 60fps

#include "my_task_Tetris_2.h"

#define INTERVAL 1.0/60.0

// clock Ÿ�� : ���α׷��� ���۵� �ð�.


int main() {
	srand(time(0));

	float prev = (float)clock() / CLOCKS_PER_SEC;
	Display* display = new Display();
	GameEngine* gameEngine = new GameEngine();      ///1
	gameEngine->init();
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
		bool rotate = keyState('w');

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
		else if (rotate) {
			//todo : ȸ��
			gameEngine->rotate();
		}
		else {
			// �׳� ��� ��������
			gameEngine->next(dt, 0);            ///3
		}


		//ȭ�� ���
		gameEngine->makeDisplayData();   /////2
		display->draw();


		if (gameEngine->state == GameEngine::GameState::GAMEOVER) {
			break;
		}

		//���� ���� �Ǻ�
	}

	return 0;
}