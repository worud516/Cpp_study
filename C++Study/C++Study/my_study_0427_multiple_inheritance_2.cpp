#include <cstdio>



class A {
public:
	void func1() {
		printf("A\n");
	}
};


class B : virtual public A {
public:
	void func2() {
		printf("B\n");
	}
};

class C : virtual public A {
public:
	void func2() {
		printf("C\n");
	}
};


class D : public B, public C {
public:
	void func3() {
		// A::func1(); 문장을 실행할 경우 A클래스에서 기본 클래스가 모호합니다. 라는 에러 메세지가 발생되면 
		// 죽음의 다이아몬드 현상이 발생된 것이다. --> A라는 클래스가 B로 상속된 후 D로 상속되었고 A라는 클래스가
		// C로 상속된 후 D로 상속되었기 때문이다. --> D 클래스는 A클래스를 2번 상속받았다.
		// 죽음의 다이아몬드 현상을 해결하려면 중복 상속이 예상되는 클래스를 상속받을 때 virtual 예약어를 사용해 상속받는다.
		// virtual 예약어는 같은 클래스가 2번이상 상속되지 않는다.
		func1();
		B::func2();
		C::func2();
		printf("D\n");
	}
};


int main() {

	D d;
	d.func3();


	return 0;
}
