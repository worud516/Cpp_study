#include <cstdio>

/*
class 클래스이름 {
	// 접근 권한 지정자를 생략하면 private 권한으로 취급한다.
	// 접근 권한 지정자
	// private : 현재 클래스 외부에서 접근할 수 없다.													상속 불가능
	// protected : 현재 클래스와 현재 클래스를 상속받은 자식 클래스에서 접근 할 수 있다.		상속 가능
	// public : 현재 클래스 외부에서 자유롭게 접근할 수 있다.											상속 가능
	접근 권한 지정자 :
		멤버 변수;
		...;
	접근 권한 지정자 :
		멤버 함수;
		...;

};
*/

class Person {
private:
	char name[11];
	int age;
};



void main() {

// class(생략가능) 클래스이름 객체이름;
	Person person;

// 클래스 객체의 멤버에 접근하는 방법
// 클래스객체이름.멤버이름

	//person.name;
	

}