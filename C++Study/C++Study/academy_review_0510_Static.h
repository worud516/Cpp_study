#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>

class Myclass {
public:
	static int static_member_int;	
	int a;
	void foo();
	static void goo();
};




/*
class Myclass {
public:
	static int b;	// ���� ����
	int a;
	void foo() {				// ���̳��� �ż��� : �ڱ� �ڽ��� �ν��Ͻ��� �ִ�.		// this ��밡��
		a = 100;
		this->a = 200;
		printf("foo\n");
	}
	static void goo() {		// ����ƽ �ż��� : ��ü�� �ʿ����. (Ŭ���� �ȿ� �����ϴ� Ŭ���� �ν��Ͻ��� ���� �Լ���.)	// this ���Ұ�
		b = 100;
		printf("goo\n");
	}
};
*/