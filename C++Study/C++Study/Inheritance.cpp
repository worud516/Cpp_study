#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Animal { //������ִ� Ŭ������ ��� ����, �Լ��� �ܺμ�� Ȱ���Ҽ��ִ�.
public: // public :�ƹ���		protected : �ܺ�x ����o(�ڽ��� ������)		private:�ش� Ŭ���� �ȿ����� ��� ����		3���� ���� �����ڶ����
	int legs;
	char name[50];

	Animal(int legs, const char* name) {
		printf("���������� ����\n");
		this->legs = legs;
		strcpy(this->name, name);
	}

	void printfAnimalinfo() {
		printf("�ٸ��� ���� : %d\n", legs);
		printf("�̸� : %s\n", name);
	}
};

class Person : public Animal{
public:
	char regist_no[30];

	Person(const char* regist_no) : Animal(2, "���"){
		printf("��������� ����\n");
		printf("%s\n", regist_no);
		//legs = 2;
		//strcpy(name, "���");
	}
};

class dog : public Animal {
public:
	dog() : Animal(4, "������") {
		printf("dog ������ ����\n");
	}
};


int main() { //������ Ŭ�������� ������ Ŭ�������� �� ���� ����Ѵ�.

	Person* p = new Person("1234-9999");

	p->printfAnimalinfo();

	dog* d = new dog();
	d->printfAnimalinfo();

	return 0;
}