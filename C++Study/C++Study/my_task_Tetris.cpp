// 60fps

#include "my_task_Tetris_2.h"

#define INTERVAL 1.0/60.0

// clock Ÿ�� : ���α׷��� ���۵� �ð�.

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
			// �������� ��� �̵�
		}
		else {
			// �׳� ��� ��������
		}
		// ȭ�� ���
		// ���ӻ��� �Ǻ�
		bool right = keyState('d');
	}


	return 0;
}