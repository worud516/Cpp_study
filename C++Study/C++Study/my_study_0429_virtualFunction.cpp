#include <cstdio>

class Base {
	// 정적 바인딩
	// 컴파일 단계에서 클래스의 객체가 실행할 함수의 주소가 결정된다.
	// 프로그램 중간에 주소가 변경된다 하더라도 실행되는 함수가 변경되지 않는다.

	// 동적바인딩
	// 컴파일 단계에서는 실행할 함수의 주소를 비워두고 프로그램이 실해되면 실행할 함수의 주소를 결정한다.
	// 프로그램 중간에 주소가 변경되면 실행되는 함수가 변경된다.
	// 함수가 컴파일 될 때 동적 바인딩을 하게 하려면 함수 선언시 virtual 예약어를 붙여서 선언하면 된다.
public:
	virtual void say() { // 동적 바인딩
		printf("Base(부모) 클래스의 say() 함수 호출\n");
	}
};

class Derived : public Base{
public:
	// 상속받은 함수 say()를 override 한다.
	void say() { // 정적 바인딩
		printf("Derived(자식) 클래스의 say() 함수 호출\n");
	}
};


int main() {

	Base base, *pBase;
	base.say();

	Derived derived, *pDerived;
	derived.say();

	printf("================================\n");

	pBase = &base;
	printf("부모 클래스 포인터 pBase에 저장된 주소 : %p\n", pBase);
	pBase->say();
	pDerived = &derived;
	printf("자식 클래스 포인터 pDerived에 저장된 주소 : %p\n", pDerived);
	pDerived->say();
	printf("================================\n");

	// 부모 클래스 객체에는 자식 클래스 객체의 주소를 저장할 수 있지만 자식 클래스 객체에는 부모 클래스 객체의 주소를 저장할 수 없다.
	// pDerived = &base;		// 자식 포인터에 부모 클래스로 생성한 객체의 주소를 넣었으므로 에러가 발생된다.

	// 부모 클래스 포인터 pBase는 자식 클래스의 객체 derived가 메모리에 생성된 주소를 기억하고 있다.
	pBase = &derived;
	printf("부모 클래스 포인터 pBase에 저장된 주소 : %p\n", pBase);
	pBase->say();

	return 0;
}