// const 
#define _CRT_SECURE_NO_WARNINGS
#define MYVALUE 100		// 프로그램에 아예 밖히는 값  // 상수  --> 프로그램에 직접 밖아넣는 값

#include <cstdio>
#include <string>


// const 변수라는 공간을 메모리에 차지하고 바뀔 수 있다. 하지만 프로그램이 바뀌는걸 허용하지 않는다.
// 정의가 되지 않은 상수는 존재할 수 없다.
class Person {
public:
	const int age; // 변수형태의 공간을 갖고있는 상수

	// 10이라는 값은 절대 변하지 않는다. 하지만 이 이외의 변동형 값을 받을 수가 있다.  --> 변수 형태를 받아서 가변적인 상수가 될 수 있다.
	Person(int n) : age(n) {

	}
};



int main() {
	

	const char* str;
	char* myStr = new char[100];
	strcpy(myStr, "Hello World!");
	str = myStr;

	printf("%s", str);
	return 0;


	int input;
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);



	Person* p = new Person(input);
	printf("%d", p->age);





	// const int value = MYVALUE;

	// printf("%d", value);

	return 0;
}