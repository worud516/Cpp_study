// #pragma once �ߺ� �����ִ� ��ũ�� ������ ǥ���� �ƴ�
// c++ ���α׷��� ������ cpp���� �������� ���������.
// �ϳ��� Ŭ������ �ϳ��� ������ϰ� �ϳ��� cpp������ �����.
// c++������ �������� �� �� cpp������ �������� �������� �Ѵ�.
// �������� ������ �Ǵ� cpp���Ͽ��� ����ο� �Լ��� ������ �ִٸ�, �� ����� �Լ��� ���� ��ü�� �����ִ� �Լ��� ����ȴ�. (Linking)





#include "academy_review_0504_main_header.h"
#include "academy_review_0504_Animal_header.h"
#include "academy_review_0504_Person_header.h"





int main() {

	Animal* animal = new Animal(2, "��");
	animal->printInfo();

	Person* person = new Person("1234-5678", "ȫ�浿");
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
