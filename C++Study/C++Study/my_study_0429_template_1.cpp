#include <cstdio>


/*
void change(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void change(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}

void change(char& a, char& b) {
	char temp = a;
	a = b;
	b = temp;
}
*/


// 템플릿은 함수가 호출될 때 넘어오는 인수의 데이터 타입을 받는다.
// 템플릿이 하나만 있으면 첫 번째 인수의 데이터 타입만 받고 두개 있으면 두 번째 인수의 데이터 타입까지 받는다.
template <class T>
void change(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}


int main() {

	int a = 3;
	int b = 4;

	printf("%d %d\n", a, b);
	change(a, b);
	printf("%d %d\n", a, b);


	double c = 2.2;
	double d = 4.4;

	printf("%.2f %.2f\n", c, d);
	change(c, d);
	printf("%.2f %.2f\n", c, d);
	

	char ch1 = 'A';
	char ch2 = 'B';
	printf("%c %c\n", ch1, ch2);
	change(ch1, ch2);
	printf("%c %c\n", ch1, ch2);



	return 0;
}