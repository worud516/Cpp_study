#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>



class Student {
public:
	int student_num;
	char* name;
	int gender;
	//생성자
	Student(int pStudNo, const char* n, int g) {
		student_num = pStudNo;
		//name = new char[20];
		name = new char[strlen(n) + 1];
		//문자열 길이에 딱 맞는 배열일 만들어진다.
		strcpy(name, n);
		gender = g;
	}

	//Student(int student_num, const char* n, int g) { //생성자
	//	this - > student_num = student_num;
	//	strcpy(name, n);
	//	gender = g;
	//}

	//소멸자 : destructor
	//모든 동적 메모리를 수동으로 관리해줘야 하는 c++의 특성상
	//클래스 멤버변수에 동적메모리 할당 된 개체가 있다고 할 경우
	//소멸자에서 처리하지 않으면 하나하나 클래스 외부에서 delete 전에 메모리를
	//해제해야 한다. -> 불편합과 불합리함을 초래하므로 소멸자를 사용한다.

	~Student() {
		printf("소멸자 호출\n");
		delete[] name;
	}


	void printStudentInfo() {
		printf("학생 번호 : %d\n", student_num);
		printf("학생 이름 : %s\n", name);
		printf("성별 : %s\n\n", gender == 0 ? "남자" : "여자");
	}

};


int main() {
	//인스턴스 = s
	// 정적
	Student s = Student(1234,"홍길동", 0);
	/*s.student_num = 1234;
	strcpy(s.name, "홍길동");
	s.gender = 0;*/
	s.printStudentInfo();


	//인스턴스 = s2
	Student s2 = Student(1234, "홍길순", 1);;
	/*s.student_num = 4321;
	strcpy(s.name, "홍길순");
	s.gender = 1;*/
	s2.printStudentInfo();


	//인스턴스 = ps
	// 동적
	Student* ps = new Student(2314, "임꺽정", 0);
	/*ps->student_num = 2314;
	strcpy(ps->name, "임꺽정");
	ps->gender = 0;*/
	ps->printStudentInfo();


	delete ps;

	return 0;
}