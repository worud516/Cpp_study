//���� ���̵� : �θ� Ŭ������ Ʋ�� �Լ��� ���� Ŭ�������� ������ �ϴ� ��
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
#include <cstdlib>


class Animal {
public:
	int legs;
	char name[20];


	Animal(int legs, const char* name) {
		this->legs = legs;
		strcpy(this->name, name);
	}

	void printInfo() {
		printf("�ٸ� : %d, �̸�: %s\n", legs, name);
	}


};


class Person : public Animal {
public:
	char regist_no[40];

	Person(const char* regist_no) : Animal(2, "���"){
		strcpy(this->regist_no, regist_no);
	}

};



int main() {
	Person* p1 = new Person("1234-1234");
	Animal* a1 = new Animal(2, "��");

	a1->printInfo();
	p1->printInfo();


	return 0;
}