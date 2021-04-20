#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Animal { //상속해주는 클래스의 멤버 변수, 함수를 외부세어도 활용할수있다.
public:
	int legs;
	char name[50];

	Animal(int legs, const char* name) {
		printf("동물생성자 실행\n");
		this->legs = legs;
		strcpy(this->name, name);
	}

	void printfAnimalinfo() {
		printf("다리의 갯수 : %d\n", legs);
		printf("이름 : %s\n", name);
	}
};

class Person : public Animal{
public:
	char regist_no[30];

	Person(const char* regist_no) : Animal(2, "사람"){
		printf("사람생성자 실행\n");
		printf("%s\n", regist_no);
		//legs = 2;
		//strcpy(name, "사람");
	}

};

int main() { //정적인 클래스보다 동적인 클래스에서 더 많이 사용한다.

	Person* p = new Person("1234-9999");

	p->printfAnimalinfo();
	
	return 0;
}