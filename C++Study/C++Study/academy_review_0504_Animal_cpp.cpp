#include "academy_review_0504_main_header.h"
#include "academy_review_0504_Animal_header.h"


Animal::Animal(int legs, const char* name) {
	this->legs = legs;
	strcpy(this->name, name);
}

void Animal::printInfo() {
	printf("������ �̸� : %s, ������ �ٸ� : %d\n", name, legs);
}