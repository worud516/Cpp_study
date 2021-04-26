// 가상 함수(Virtual Function) : 실질적으로 내가 원하는 함수를 호출
// 앞으로 소멸자 사용할 때는 앞에 virtual을 꼭 쓰자.

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
		printf("애니멀 소멸자 호출됨.\n");
		delete[] name;
	}


	virtual void printInfo() {						// 부모 클래스가 버추얼 함수이면 자식 클래스는 아니어도 상관은 없음.
		printf("다리 %d, 이름 %s\n", legs, name);
	}
};

class Person : public Animal {
public:
	//char regist_no[40];
	char* regist_no;

	Person(const char* regist_no) : Animal(2, "사람") {
		this->regist_no = new char[strlen(regist_no) + 1];
		strcpy(this->regist_no, regist_no);
	}

	virtual ~Person() {		//지속 & 연쇄적으로 부모의 소멸자를 호출
		printf("펄슨 소멸자 호출됨\n");
		delete[] regist_no;
	}


	virtual void printInfo() {
		printf("이름 %s, 주민번호 %s\n", name, regist_no);
	}
};

int main() {

	Animal* animal = new Person("1234-5678");
	delete animal;

	//Person* person = new Person("9876-5432");
	//delete person;  //지속 & 연쇄적으로 부모의 소멸자를 호출



	//Person* person = new Person("1234-1234");
	//Animal* animal = person;


	//animal->printInfo();
	//person->printInfo();



	return 0;
}