//헤더파일 : 소스 파일의 첫부분(함수의 원형이나 사용할 변수 및 다양한 선언)

//매크로 : 전처리기(#)
//#include, #define, _CRT_SECURE_NO_WARNING
// C++ : 조건에 맞게 전처리기를 이용해서 조작
// C#, C 


#include "academy_review_0414_Header.h"


int main() {
	int v1 = 100;
	int v2 = 200;

	int result = add(v1, v2);

	printf("%d\n", result);


	Person p1;
	p1.age = 22;

	printf("p1.age = %d\n", p1.age);

	printf("%f\n", pow(2.0,10)); //2^10
	printf("%f\n", sin(90)); //라디안 단위

	srand(time(0));
	printf("%d\n", rand() % 10); // 0~9까지 

	return 0;
}


int add(int a, int b) {
	return a + b;
}