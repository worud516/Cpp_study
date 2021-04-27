#include "my_task_EmployeeManagement.h"

int main() {

	Employee* employee[100];
	int count = 0;  //����� ����� �ִ��� ���
	//�������
	//����߰�
	//�������
	//���α׷�����

	while (true) {
		printf("��ɾ �Է��ϼ���\n");
		printf("1. ��� ����\n");
		printf("2. ��� �߰�\n");
		printf("3. ��� ����\n");
		printf("4. ���α׷� ����\n");

		fseek(stdin, 0, SEEK_END);
		int input;
		scanf("%d", &input);

		if (input == 1) {
			//�������
			for (int i = 0; i < count; i++) {
				employee[i]->printInfo();
			}
		}
		else if (input == 2) {
			//����߰�
			char* name = getString("������� �Է����ּ��� :");
			int gender = getInt("������ �Է����ּ���(1 ���� (2 ���� :");
			char* rank = getString("������ �Է����ּ��� :");

			Employee* e = new Employee(name, gender, rank);

			delete[] name;
			delete[] rank;      //�������� �Ҵ�� ���� ����

			employee[count] = e;   //���
			count++;
		}
		else if (input == 3) {
			//��� ����
			int number = getInt("�����ȣ�� �Է����ּ��� \n");
			int deletedIndex = -1;

			for (int i = 0; i < count; i++) {
				if (number == employee[i]->no) {	//������ �ȴٸ�
					delete employee[i];					
					deletedIndex = i;
					break;
				}
			}
			if (deletedIndex >= 0) {	//������ ������ ������ �Ǿ��� ��
				for (int i = deletedIndex; i < count - 1; i++) {
					employee[i] = employee[i + 1];	//�ε��� ��Ĭ�� ���ܿ���
				}
			}
			count--;
			printf("�����Ǿ����ϴ�.");
		}
		else if (input == 4) {
			//���α׷� ����
			printf("���α׷��� �����մϴ�.");
			break;
		}
		else {
			//�ùٸ��� ���� �Է�
			printf("�ùٸ��� ���� �Է��Դϴ�.\n");
		}
	}


	return 0;
}

int getInt(const char* prompt) { //���� �޾ƿ���
	int input;
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);
	return input;
}

char* getString(const char* prompt) { //���� �޾ƿ���
	char* input = new char[100];
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input);  //99�� ���ڸ� �޾Ƽ� ��Ʈ������ input�� ����
	return input;
}