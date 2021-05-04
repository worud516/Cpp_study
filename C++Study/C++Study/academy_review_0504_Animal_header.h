// #pragma once 중복 막아주는 매크로 하지만 표준 아님

// 클래스의 선언과 파일 이름은 같지 않아도 된다.
// 여러개의 헤더파일에 중복적용 되어있어도 상관없다.
#ifndef __ANIMAL_H__
#define __ANIMAL_H__



class Animal {
public:
	int legs;
	char name[50];

	Animal(int legs, const char* name);
	void printInfo();

};


#endif