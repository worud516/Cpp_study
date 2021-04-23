// ���� �Լ�(Virtual Function) : ���������� ���� ���ϴ� �Լ��� ȣ��
// ������ �Ҹ��� ����� ���� �տ� virtual�� �� ����.

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>

class Animal {
public:

	int legs;
	//char name[20];
	char* name;

	Animal(int legs, const char* name) {
		this->name = new char[strlen(name) + 1];
		this->legs = legs;
		strcpy(this->name, name);
	}

	virtual ~Animal() {
		printf("�ִϸ� �Ҹ��� ȣ���.\n");
		delete[] name;
	}


	virtual void printInfo() {						// �θ� Ŭ������ ���߾� �Լ��̸� �ڽ� Ŭ������ �ƴϾ ����� ����.
		printf("�ٸ� %d, �̸� %s\n", legs, name);
	}
};

class Person : public Animal {
public:
	//char regist_no[40];
	char* regist_no;

	Person(const char* regist_no) : Animal(2, "���") {
		this->regist_no = new char[strlen(regist_no) + 1];
		strcpy(this->regist_no, regist_no);
	}

	virtual ~Person() {		//���� & ���������� �θ��� �Ҹ��ڸ� ȣ��
		printf("�޽� �Ҹ��� ȣ���\n");
		delete[] regist_no;
	}


	virtual void printInfo() {
		printf("�̸� %s, �ֹι�ȣ %s\n", name, regist_no);
	}
};

int main() {

	Animal* animal = new Person("1234-5678");
	delete animal;

	//Person* person = new Person("9876-5432");
	//delete person;  //���� & ���������� �θ��� �Ҹ��ڸ� ȣ��



	//Person* person = new Person("1234-1234");
	//Animal* animal = person;


	//animal->printInfo();
	//person->printInfo();



	return 0;
}