#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;  // std::  <<<< 이거 안써도되는 코드

// 개발자는 각각의 namespace를 갖는다.

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
	printf("홍길동이 만든 함수입니다.\n");
}

hong::Person::Person() {
	
}

void hong::Person::printInfo(int i, const char* name) {

}

void kim::foo() {
	printf("김철수가 만든 함수입니다.\n");
}



