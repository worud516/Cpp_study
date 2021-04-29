#include <cstdio>


template <class T1, class T2>
T1 myMin(T1 a, T2 b) {
	T1 result = a;
	if (a > b) {
		result = b;
	}
	return result;
}



int main() {

	int a = 4;
	int b = 3;

	printf("������ : %d\n", myMin(a, b));

	double c = 1.9;
	double d = 5.1;

	printf("������ : %.2f\n", myMin(c, d));

	printf("������ : %d\n", myMin(a, d));

	return 0;
}