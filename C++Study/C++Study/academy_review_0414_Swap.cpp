//#define SWAP(X, Y, T) T = X; X = Y; Y = T // 전처리 함수는 한줄안에 끝내야함 

#define SWAP(X, Y, TYPE) {TYPE temp = X; X = Y; Y = temp;} //지역변수로 묶어야 에러 안생김

//#define P(A, B) A##B
//소스 코드를 물리적으로 직접 교체한다.

//#define PI 3.141592

#include <cstdio>

#define EXECUTE_NUM 0

#if EXECUTE_NUM == 0
int main() {

	//printf("111111111");

	//float pi = PI;

	int v1 = 100;
	int v2 = 200;
	//int temp;

	printf("%d %d\n", v1, v2);
	SWAP(v1, v2, int);

	//P(printf, ("Hello World"));

	printf("%d %d\n", v1, v2);
	SWAP(v1, v2, int);

	printf("%d %d\n", v1, v2);


	return 0;
}
#else
int main() {
	printf("22222222");

	return 0;
}
#endif