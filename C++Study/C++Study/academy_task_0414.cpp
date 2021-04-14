//문제 - 다석개의 수의 평균을 구하는 매크로 함수를 만들어주세요.


#include <cstdio>

#define AVG(a, b, c, d, e) (a+b+c+d+e) / 5

int main() {

	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int e = 50;

	int avg = AVG(a,b,c,d,e);

	printf("%d", avg);

	return 0;
}