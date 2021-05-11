// extern : 외부에 존재한다. (프로그램 전체의 static)
// static 키워드가 있으면 각각의 cpp파일에서 다르게 작용한다.
// include를 한 cpp파일마다 다른 선언과 다른 몸체를 가진다.


#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <string>

extern int myValue;  // 컴파일 하게 되면 extern and sub 각각에 할당됨

void add();

