// #pragma once �ߺ� �����ִ� ��ũ�� ������ ǥ�� �ƴ�

// Ŭ������ ����� ���� �̸��� ���� �ʾƵ� �ȴ�.
// �������� ������Ͽ� �ߺ����� �Ǿ��־ �������.
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