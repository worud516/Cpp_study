//오버 라이딩 : 부모 클래스의 틀정 함수를 지식 클래스에서 재정의 하는 것
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
		printf("다리 : %d, 이름: %s\n", legs, name);
	}


};


class Person : public Animal {
public:
	char regist_no[40];

	Person(const char* regist_no) : Animal(2, "사람"){
		strcpy(this->regist_no, regist_no);
	}

};



int main() {
	Person* p1 = new Person("1234-1234");
	Animal* a1 = new Animal(2, "닭");

	a1->printInfo();
	p1->printInfo();


	return 0;
}