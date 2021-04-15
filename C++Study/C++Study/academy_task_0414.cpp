//문제 - 다석개의 수의 평균을 구하는 매크로 함수를 만들어주세요.


#include <cstdio>

#define AVG(a, b, c, d, e) (a+b+c+d+e) / 5

int main() {

	int avg = AVG(10,20,30,40,50);

	printf("%d", avg);

	return 0;
}