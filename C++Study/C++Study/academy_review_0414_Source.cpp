//������� : �ҽ� ������ ù�κ�(�Լ��� �����̳� ����� ���� �� �پ��� ����)

//��ũ�� : ��ó����(#)
//#include, #define, _CRT_SECURE_NO_WARNING
// C++ : ���ǿ� �°� ��ó���⸦ �̿��ؼ� ����
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
	printf("%f\n", sin(90)); //���� ����

	srand(time(0));
	printf("%d\n", rand() % 10); // 0~9���� 

	return 0;
}


int add(int a, int b) {
	return a + b;
}