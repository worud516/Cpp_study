// static : ���� --> Ŭ���� ����, �ܺ� �� ���� �ǹ̰� �ٸ���.
// dynamic : ����

#include "academy_review_0510_Static.h"


//class Myclass {
//public:
//	static int b;	// ���� ����
//	int a;				
//	void foo() {				// ���̳��� �ż��� : �ڱ� �ڽ��� �ν��Ͻ��� �ִ�.		// this ��밡��
//		a = 100;
//		this->a = 200;
//		printf("foo\n");
//	}
//	static void goo() {		// ����ƽ �ż��� : ��ü�� �ʿ����. (Ŭ���� �ȿ� �����ϴ� Ŭ���� �ν��Ͻ��� ���� �Լ���.)	// this ���Ұ�
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
