#include "academy_review_0504_main_header.h"
#include "academy_review_0504_Person_header.h"

Person::Person(const char* regist_no, const char* person_name) : Animal(2, person_name) {
	strcpy(this->regist_no, regist_no);
}

void Person::pringtInfo() {
	printf("����̸� : %s, �ֹι�ȣ : %s\n", name, regist_no);
}