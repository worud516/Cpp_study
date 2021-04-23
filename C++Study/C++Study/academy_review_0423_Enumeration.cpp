// ������ - �������� ���� Ÿ��(Enumeration)
// ������ - �ҽ��ڵ带 �ѹ��� ������ ���� �� �ִ� ����
// ����� ���� ������ �߻������� ������ ������ �ܾ �ִ��ѵ��� �̿�.

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
		printf("%s�� �л���ȣ�� %d�Դϴ�. ������ %s�Դϴ�.\n", name, student_no, gender == Gender::MALE ? "����" : "����");
	}
};


int main() {

	Student* student = new Student("ȫ�浿", 2, Gender::MALE);

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