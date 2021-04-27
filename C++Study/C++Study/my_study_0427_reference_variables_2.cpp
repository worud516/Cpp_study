#include <cstdio>





void change(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


//참조변수
void change(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}



int main() {

	int a = 3, b = 4;
	printf("%d %d\n", a, b);
		
	change(&a, &b);
	printf("%d %d\n", a, b);

	change(a, b);
	printf("%d %d\n", a, b);

	return 0;
}