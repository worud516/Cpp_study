#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>


class Grades{
private:
	int no;
	char name[20];
	int cpp;
	int java;
	int jsp;
	int total;
	double average;

public:
// ������ �Լ�(���� ������) �̸��� �ݵ�� Ŭ���� �̸��� ���ƾ� �Ѵ�.
// �����ڴ� Ŭ������ ��ü�� �����Ǵ� ���� �ڵ����� ����ȴ�.
// �������� ������ ��� ������ �ʱ�ȭ ��Ű�ų� �޸𸮸� �������� �Ҵ��Ϸ� �ϴ°�� �ַ� ���ȴ�.
// �����ڴ� �������� ������ �� �ְ� �̶� �������� �μ��� ������ Ÿ������ �����ڸ� �����Ѵ�. ==> ������ �����ε�
// 


	// �⺻ ������, Ŭ������ �����ڸ� �������� ������ �����Ϸ��� �ƹ��� ���� �����ʴ� �⺻ �����ڸ� ������ش�.
	// ����ڰ� �����ڸ� �����ϸ� �⺻ �����ڴ� �ڵ����� �������� �����Ƿ� �ݵ�� �ڵ��� ����� �Ѵ�.
	//Grades() {
	//	printf("�⺻ �����ڰ� ����˴ϴ�.\n");
	//}

	Grades(int no, const char* name, int cpp, int java, int jsp) {
// ���� {} ��Ͽ� ���� �̸��� ������ ��� ������ ���� ������ ������ ��� ���� ������ �켱���� �ش�.
// ��� ������ ���� ������ �����ϱ� ���ؼ� this �����͸� ����Ѵ�.

		this->no = no;
// ���� �迭�� "="�� ����ؼ� ���� ���� �� �ִ� ���� �迭�� �����ϴ� ������ �����ϴ�.
		// this->name = name; // ���� �߻�
		strcpy_s(this->name, name);
		this->cpp = cpp;
		this->java = java;
		this->jsp = jsp;
		total = cpp + java + jsp;
		average = (double)total / 3;
	}

	void toString() {
		printf("%d. %s���� ��� ������ %0.2lf�Դϴ�.\n", no, name, average);
	}
};

int main() {

// �⺻ ������ Grades()�� �̿��� Ŭ������ ��ü�� �����ȴ�.
	//Grades grades;	
	//grades.toString();

// ������ Grades(int no, char name[20], int cpp, int java, int jsp)�� �̿��� Ŭ������ ��ü�� �����ȴ�.
	Grades grades2(1, "ȫ�浿", 100, 100, 99);
	grades2.toString();




	return 0;
}