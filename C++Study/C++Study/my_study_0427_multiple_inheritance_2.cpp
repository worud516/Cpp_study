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
		// A::func1(); ������ ������ ��� AŬ�������� �⺻ Ŭ������ ��ȣ�մϴ�. ��� ���� �޼����� �߻��Ǹ� 
		// ������ ���̾Ƹ�� ������ �߻��� ���̴�. --> A��� Ŭ������ B�� ��ӵ� �� D�� ��ӵǾ��� A��� Ŭ������
		// C�� ��ӵ� �� D�� ��ӵǾ��� �����̴�. --> D Ŭ������ AŬ������ 2�� ��ӹ޾Ҵ�.
		// ������ ���̾Ƹ�� ������ �ذ��Ϸ��� �ߺ� ����� ����Ǵ� Ŭ������ ��ӹ��� �� virtual ���� ����� ��ӹ޴´�.
		// virtual ������ ���� Ŭ������ 2���̻� ��ӵ��� �ʴ´�.
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
