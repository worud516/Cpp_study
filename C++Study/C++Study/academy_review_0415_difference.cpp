// 구조체 -> 클래스
// stl 코드간소화
// 객체지향 프로그램(oop : object oriented programming)
// 객첵(object) : 물리적으로 존재하거나 추상적으로 생각할 수 있는 것 중에서 자신의 속성을 가지고 있고 다른 것과 식별 가능한 것
// 실체 : 실제로 존재하는 것 -> 속성 + 역량
// 주체 : 내가 실체인 나를 볼 때 실체가 스스로를 부르는 이름
// 객체 : 내가 나 말고 다른 실체를 부르는 이름 -> 속성 + 역량
// 속성 : 멤버 변수
// 역량(행동) : 멤버 함수
// 추상화(abstraction) : 복잡한 자료, 모듈, 시스템 등으로부터 핵심적인 개념 또는 기능을 간추려 내는 것을 말한다.
// 상속 : ingeritance : 코드의 절약, 재사용성, 편리해지고 빠르다.
// 다형성 : 사람은 동물이다(o), 동물은 사람이다(x) a is b  사람 -> 동물  자식클래스 -> 부모클래스


//#include <iostream>
#include <cstdio>


//struct Person
//{
//	int age;
//	int hp;
//};


struct Animal
{
	int age = 1;
	int legs = 2;
	int arms = 2;
};

struct tiger : public Animal{
	int age = 2;
};




int main() {

	//int* arr = (int*)malloc(sizeof(int) * 10);
	//free(arr);

	//int* arr = new int[100];
	//delete[] arr;


	//Person* p1 = (Person*)malloc(sizeof(Person));
	//free(p1);
	
	//Person p1 = new Person();
	//delete p1;

	//std::cout << "Hello World" << std::endl;
	//printf("Hello World");

	tiger t1;
	printf("%d", t1.age);

	return 0;
}



