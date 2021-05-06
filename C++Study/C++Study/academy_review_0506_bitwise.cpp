// ��Ʈ������

// Bitwise or		|
// Bitwise and	&
// Shift				<<, >>

#include <cstdio>

void foo(int params) {
	int category1 = 1;			//1
	int category2 = 1 << 1;	//2
	int category3 = 1 << 2;	//4

	if ((category1 & params) != 0) {
		printf("ī�װ� 1�� ����\n");
	}
	if ((category2 & params) != 0) {
		printf("ī�װ� 2�� ����\n");
	}
	if ((category3 & params) != 0) {
		printf("ī�װ� 3�� ����\n");
	}
}


int main() {

	int v1 = 1;
	int v2 = 3;

	int bitwise_or = v1 | v2;
	printf("bitwise_or : %d\n", bitwise_or);

	int bitwise_and = v1 & v2;
	printf("bitwise_and : %d\n", bitwise_and);

	int shift_left = v2 << 1;
	printf("shift_left : %d\n", shift_left);

	int shift_right = v2 >> 1;
	printf("shift_left : %d\n", shift_right);

	
	int mario_category = 8 + 4 + 2 + 1;		// ������		bit 1111
	int enemy_category = 0 + 4 + 2 + 1;		// ��				bit 0111
	int turtle_category = 0 + 0 + 2 + 1;		// �ź��� ��		bit 0011
	//int terrian_category = 0 + 4 + 0 + 0;		// ����			bit 0100
	int terrian_category = 1 << 2;

	foo(1 | 2 | 4);

	return 0;
}