// #pragma once 중복 막아주는 매크로 하지만 표준이 아님
// c++ 프로그램은 무조건 cpp파일 기중으로 만들어진다.
// 하나의 클래스당 하나의 헤더파일과 하나의 cpp파일을 만든다.
// c++파일은 컴파일을 할 때 cpp파일을 기준으로 검파일을 한다.
// 컴파일의 기준이 되는 cpp파일에서 선언부에 함수의 선언이 있다면, 그 선언된 함수와 실제 몸체를 갖고있는 함수가 연결된다. (Linking)





#include "academy_review_0504_main_header.h"
#include "academy_review_0504_Animal_header.h"
#include "academy_review_0504_Person_header.h"





int main() {

	Animal* animal = new Animal(2, "닭");
	animal->printInfo();

	Person* person = new Person("1234-5678", "홍길동");
	person->pringtInfo();



	// foo();

	return 0;
}




//void hoo() {
//	printf("hoo()\n");
//	count++;
//	foo();
//}
//
//void goo() {
//	printf("goo()\n");
//	count++;
//	hoo();
//}
//
//void foo() {
//	if (count <= 10) {
//		printf("foo()\n");
//		count++;
//		goo();
//	}
//}
