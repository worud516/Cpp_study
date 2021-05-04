// #pragma once 중복 막아주는 매크로 하지만 표준 아님

// 클래스의 선언과 파일 이름은 같지 않아도 된다.
// 여러개의 헤더파일에 중복적용 되어있어도 상관없다.
#ifndef __PERSON_H__
#define __PERSON_H__

#include "academy_review_0504_Animal_header.h"


class Person : Animal {
public:
	char regist_no[50];
	Person(const char* regist_no, const char* person_name);

	void pringtInfo();

};

#endif