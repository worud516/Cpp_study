#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

// 부모(상위, 슈퍼, 기반) 클래스
class Parent {
private:  // protected 권한을 사용하면 부모 클래스와 부모 클래스를 상속받은 자식 클래스에서 접근할 수 있다.
	
	char name[20];
	bool gender;

public:
	Parent() {
		strcpy(name, "무명");
		gender = true;
	}

	Parent(const char name[20], bool gender) {
		strcpy(this->name, name);
		this->gender = gender;
	}

	char* getName() {
		return name;
	}

	bool isGender() {
		return gender;
	}

	void setName(const char name[20]) {
		strcpy(this->name, name);
	}

	void setGender(bool gender) {
		this->gender = gender;
	}


	void toString() {
		printf("%s (%s)\n", name, gender == true ? "남자" : "여자");
	}
};


// 자식(하위, 서브, 파생) 클래스
// 상속이란 부모 클래스에서 정의한 멤버 변수와 함수를 자식 클래스에서 정의하지 않아도 그래도 사용할 수 있는 것을 의미한다.
// class 자식클래스이름 : 상속권한지정자 부모클래스이름
// 상속 권한 지정자
// private		: 부모 클래스에서 정의한 접근 권한 지정에 관계없이 무조건 private으로 상속된다.
// protected	: 부모 클래스의 private 권한은 private으로 나머지는 protected 권한으로 상속된다.
// public			: 부모 클래스의 접근 권한 그대로 상속된다.
class Child : public Parent{
private:
	int age;
	char nickName[20];

public:
// 부모 클래스에서 상속받은 멤버 변수의 접근권한이 private이면 자식 클래스에서 접근할 수 없다.
	Child() {

	}

// 부모 클래스로 부터 상속받은 멤버 변수의 접근 권한이 private일 경우 초기화 하는 방법은 2가지가 있다.
// 첫번째 방법은 부모 클래스의 생성자를 실행해서 초기화 시킨다.
// 두번째 방법은 부모 클래스의 setter가 정의되어 있다면 setter 함수를 사용해 초기화 시킨다.

	/* 첫번째
	Child(const char name[20], bool gender, int age, const char nickName[20]) : Parent(name, gender) {
//		strcpy(this->name, name);
//		this->gender = gender;
		this->age = age;
		strcpy(this->nickName, nickName);
	};
	*/


	// 두번째
	// 부모 클래스로 부터 상속받은 멤버 변수의 접근 권한이 protected(7line)일 경우 setter를 사용하지 않고 평소처럼 this 초기화가 가능하다. 
	Child(const char name[20], bool gender, int age, const char nickName[20]) {
		setName(name);
		setGender(gender);
		this->age = age;
		strcpy(this->nickName, nickName);
	}




// 부모 클래스로 부터 상속받은 함수의 기능이 충분하지 않을 경우 자식 클래스에서 다시 만들어 사용하면 된다. -> 오버라이드
	void toString() {
		printf("%s (%s) %d %s\n", getName(), isGender() == true ? "남자" : "여자", age, nickName);
	}
};




int main() {

	Parent parent1;
	parent1.toString();

	Parent parent2("홍길동", true);
	parent2.toString();


	Child child("성춘향", false, 16, "이쁜이");
	child.toString();


	return 0;
}