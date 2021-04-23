// 열거형 - 가독성을 위한 타입(Enumeration)
// 가독성 - 소스코드를 한번에 빠르게 읽을 수 있는 정도
// 사람이 인지 가능한 추상적으로 생각이 가능한 단어를 최대한도로 이용.

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>


enum Gender {
	MALE, FMALE
};


class Student {
public:
	char name[10];
	int student_no;
	int gender;

	Student(const char* name, int student_no, Gender gender) {
		strcpy(this->name, name);
		this->student_no = student_no;
		this->gender = gender;
	}

	void printfInfo() {
		printf("%s의 학생번호는 %d입니다. 성별은 %s입니다.\n", name, student_no, gender == Gender::MALE ? "남성" : "여성");
	}
};


int main() {

	Student* student = new Student("홍길동", 2, Gender::MALE);

	student->printfInfo();

	return 0;
}


//enum Day {
//	SUNDAY = 0,MONDAY,TUESDAY,WEDNESSDAY,THURSDAY,FRIDAY,SATURDAY
//};
//
//int main() {
//	Day d = Day::MONDAY;
//	return 0;
//}