#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;  // std::  <<<< �̰� �Ƚᵵ�Ǵ� �ڵ�

// �����ڴ� ������ namespace�� ���´�.

namespace hong {
	void foo();

	class Person {
	public:
		Person();
		void printInfo(int i, const char* name);
	};

}

namespace kim {
	void foo();
}




int main() {

	string mystr = "Hello";
	vector<int> myvec;
	
	hong::foo();
	kim::foo();

	printf("%s", mystr.c_str());


	return 0;
}



void hong::foo() {
	printf("ȫ�浿�� ���� �Լ��Դϴ�.\n");
}

hong::Person::Person() {
	
}

void hong::Person::printInfo(int i, const char* name) {

}

void kim::foo() {
	printf("��ö���� ���� �Լ��Դϴ�.\n");
}



