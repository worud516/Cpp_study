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


// ���ø��� �Լ��� ȣ��� �� �Ѿ���� �μ��� ������ Ÿ���� �޴´�.
// ���ø��� �ϳ��� ������ ù ��° �μ��� ������ Ÿ�Ը� �ް� �ΰ� ������ �� ��° �μ��� ������ Ÿ�Ա��� �޴´�.
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