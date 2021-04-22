#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>


class Grades{
private:
	int no;
	char name[20];
	int cpp;
	int java;
	int jsp;
	int total;
	double average;

public:
// 생성자 함수(이하 생성자) 이름은 반드시 클래스 이름과 같아야 한다.
// 생성자는 클래스의 객체가 생성되는 순간 자동으로 실행된다.
// 생성자의 역할은 멤버 변수를 초기화 시키거나 메모리를 동적으로 할당하려 하는경우 주로 사용된다.
// 생성자는 여러개가 존재할 수 있고 이때 생성자의 인수의 개수와 타입으로 생성자를 구별한다. ==> 생성자 오버로딩
// 


	// 기본 생성자, 클래스에 생성자를 정의하지 않으면 컴파일러가 아무런 일을 하지않는 기본 생성자를 만들어준다.
	// 사용자가 생성자를 정의하면 기본 생성자는 자동으로 생성되지 않으므로 반드시 코딩을 해줘야 한다.
	//Grades() {
	//	printf("기본 생성자가 실행됩니다.\n");
	//}

	Grades(int no, const char* name, int cpp, int java, int jsp) {
// 같은 {} 블록에 같은 이름을 가지는 멤버 변수와 지역 변수가 공존할 경우 지역 변수에 우선권을 준다.
// 멤버 변수와 지역 변수를 구별하기 위해서 this 포인터를 사용한다.

		this->no = no;
// 문자 배열에 "="을 사용해서 값을 넣을 수 있는 경우는 배열을 선언하는 순간만 가능하다.
		// this->name = name; // 에러 발생
		strcpy_s(this->name, name);
		this->cpp = cpp;
		this->java = java;
		this->jsp = jsp;
		total = cpp + java + jsp;
		average = (double)total / 3;
	}

	void toString() {
		printf("%d. %s님의 평균 점수는 %0.2lf입니다.\n", no, name, average);
	}
};

int main() {

// 기본 생성자 Grades()를 이용해 클래스의 객체가 생성된다.
	//Grades grades;	
	//grades.toString();

// 생성자 Grades(int no, char name[20], int cpp, int java, int jsp)를 이용해 클래스의 객체가 생성된다.
	Grades grades2(1, "홍길동", 100, 100, 99);
	grades2.toString();




	return 0;
}