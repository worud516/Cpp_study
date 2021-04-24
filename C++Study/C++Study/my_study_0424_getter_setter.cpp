#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>



class Parent {
private:
	char name[20];
	bool gender;
	
public:
	// Parent() {
	// }
	// 디폴트 인수를 사용하는 생성자 
	// 디폴트 인수를 사용하면 함수가 호출될 때 인수가 넘어오지 않으면 디폴트 인수로 지정된 값으로 함수르 실행하고
	// 인수가 넘어오면 넘어온 값으로 함수를 실행한다.
	// 디폴트 인수는 모든 인수에 사용해야 하며 부분적으로 사용할 수 없다.
	Parent(const char name[20] = "무명", bool gender = false) {
		strcpy(this->name, name);
		this->gender = gender;
	}

	void toString() {
		printf("%s(%s)\n", name, gender == true ? "남자":"여자");
	}

	// getter & setter 함수 : private으로 접근 권한이 설정된 멤버의 값을 수정하거나 얻어올 경우 만들어 사용한다.
	// getter 함수의 이름은 get으로 시작하고 멤버 변수 이름을 적어서 만든다.		리턴 탑입은 멤버 변수의 자료형을 적고 인수는 받지 않는다.
	char* getName() {
	// 함수의 리턴 값이 주소(포인터, 배열명, 문자열)인 경우 함수 이름앞에 "*"를 붙여준다.
		return name;
	}

	bool isGender() {
		return gender;
	}


	// setter 함수의 이름은 set으로 시작하고 멤버 변수 이름을 적어서 만든다.		리턴 타입은 "void"를 사용하고 멤버에 저장할 값을 인수로 받는다.
	void setName(const char name[20]) {
		strcpy(this->name, name);
	 }

	void setGender(bool gender) {
		this->gender = gender;
	}

};


int main() {

	Parent parent1;
	parent1.toString();
	Parent parent2("홍길동", true);
	parent2.toString();

	//printf("%s",parent2.name);		name은 private 멤버 이므로 클래스 외부에서 접근하려 했기 때문에 에러가 발생된다.
	printf("%s\n",parent2.getName());
	printf("%s\n",parent2.isGender() ? "남자":"여자");

	parent2.setName("홍길순");
	printf("%s\n", parent2.getName());

	parent2.setGender(false);
	printf("%s\n", parent2.isGender() ? "남자" : "여자");

	return 0;
}