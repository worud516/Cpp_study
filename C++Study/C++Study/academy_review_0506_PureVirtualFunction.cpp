// ���� �����Լ� : ��ü�� ���� �����Լ� ,������ ��� - �ڽ�Ŭ�������� ����(������ �������� �̷��.)


#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>


class Animal {
public:
	char name[50];
	Animal(const char* name) {
		strcpy(this->name, name);
	}
	
	virtual int getLegs() = 0;

	void printfInfo() {
		printf("�̸� : %s\n", name);
	}

};

int main() {

	Animal* animal = new Animal("abcd");


	return 0;
}