// static : 정적 --> 클래스 내부, 외부 에 따라서 의미가 다르다.
// dynamic : 동적

#include "academy_review_0510_Static.h"


//class Myclass {
//public:
//	static int b;	// 전역 변수
//	int a;				
//	void foo() {				// 다이나믹 매서드 : 자기 자신의 인스턴스가 있다.		// this 사용가능
//		a = 100;
//		this->a = 200;
//		printf("foo\n");
//	}
//	static void goo() {		// 스태틱 매서드 : 주체가 필요없다. (클래스 안에 존재하는 클래스 인스턴스가 없는 함수다.)	// this 사용불가
//		b = 100;
//		printf("goo\n");
//	}
//};

int main() {

	Myclass::static_member_int = 100;
	printf("%d", Myclass::static_member_int);




	/*
	Myclass* c = new Myclass();
	c->foo();
	//c->goo();
	Myclass::goo();
	*/

	return 0;
}

int Myclass::static_member_int = 0;


void Myclass::foo() {

}

void Myclass::goo() {

}
