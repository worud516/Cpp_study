// const 
#define _CRT_SECURE_NO_WARNINGS
#define MYVALUE 100		// ���α׷��� �ƿ� ������ ��  // ���  --> ���α׷��� ���� �۾Ƴִ� ��

#include <cstdio>
#include <string>


// const ������� ������ �޸𸮿� �����ϰ� �ٲ� �� �ִ�. ������ ���α׷��� �ٲ�°� ������� �ʴ´�.
// ���ǰ� ���� ���� ����� ������ �� ����.
class Person {
public:
	const int age; // ���������� ������ �����ִ� ���

	// 10�̶�� ���� ���� ������ �ʴ´�. ������ �� �̿��� ������ ���� ���� ���� �ִ�.  --> ���� ���¸� �޾Ƽ� �������� ����� �� �� �ִ�.
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