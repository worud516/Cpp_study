#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>

// �Ϲ����� enum
//enum Month {
//	JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
//};


// Ŭ���� ������ enum
//class Calender {
//public:
//	enum Month {
//		JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
//	};
//};


// ��ȭ�� enum class type
enum class Month {
	JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};



// ���ӿ���
// playing paused win lose



int main() {

	// Month m = JAN;
	// ������ ������ ::
	// Calender::Month m = Calender::JAN;

	Month m = Month::JAN;
	int value = (int)m;

	switch (m) {
	case Month:: JAN:
		printf("1��");
		break;
	case Month:: FEB:
		printf("2��");
		break;
	case Month:: MAR:
		printf("3��");
		break;
	case Month:: APR:
		printf("4��");
		break;
	case Month:: MAY:
		printf("5��");
		break;
	case Month:: JUN:
		printf("6��");
		break;
	case Month:: JUL:
		printf("7��");
		break;
	case Month:: AUG:
		printf("8��");
		break;
	case Month:: SEP:
		printf("9��");
		break;
	case Month:: OCT:
		printf("10��");
		break;
	case Month:: NOV:
		printf("11��");
		break;
	case Month:: DEC:
		printf("12��");
		break;
	}

	printf("%d\n", m);


	return 0;
}
