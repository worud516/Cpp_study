#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>



class Student {
public:
	int student_num;
	char* name;
	int gender;
	//������
	Student(int pStudNo, const char* n, int g) {
		student_num = pStudNo;
		//name = new char[20];
		name = new char[strlen(n) + 1];
		//���ڿ� ���̿� �� �´� �迭�� ���������.
		strcpy(name, n);
		gender = g;
	}

	//Student(int student_num, const char* n, int g) { //������
	//	this - > student_num = student_num;
	//	strcpy(name, n);
	//	gender = g;
	//}

	//�Ҹ��� : destructor
	//��� ���� �޸𸮸� �������� ��������� �ϴ� c++�� Ư����
	//Ŭ���� ��������� �����޸� �Ҵ� �� ��ü�� �ִٰ� �� ���
	//�Ҹ��ڿ��� ó������ ������ �ϳ��ϳ� Ŭ���� �ܺο��� delete ���� �޸𸮸�
	//�����ؾ� �Ѵ�. -> �����հ� ���ո����� �ʷ��ϹǷ� �Ҹ��ڸ� ����Ѵ�.

	~Student() {
		printf("�Ҹ��� ȣ��\n");
		delete[] name;
	}


	void printStudentInfo() {
		printf("�л� ��ȣ : %d\n", student_num);
		printf("�л� �̸� : %s\n", name);
		printf("���� : %s\n\n", gender == 0 ? "����" : "����");
	}

};


int main() {
	//�ν��Ͻ� = s
	// ����
	Student s = Student(1234,"ȫ�浿", 0);
	/*s.student_num = 1234;
	strcpy(s.name, "ȫ�浿");
	s.gender = 0;*/
	s.printStudentInfo();


	//�ν��Ͻ� = s2
	Student s2 = Student(1234, "ȫ���", 1);;
	/*s.student_num = 4321;
	strcpy(s.name, "ȫ���");
	s.gender = 1;*/
	s2.printStudentInfo();


	//�ν��Ͻ� = ps
	// ����
	Student* ps = new Student(2314, "�Ӳ���", 0);
	/*ps->student_num = 2314;
	strcpy(ps->name, "�Ӳ���");
	ps->gender = 0;*/
	ps->printStudentInfo();


	delete ps;

	return 0;
}