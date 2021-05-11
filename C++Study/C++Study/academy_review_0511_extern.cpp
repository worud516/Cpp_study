// extern : 외부에 존재한다. (프로그램 전체의 static)
// 어떤 cpp파일에서도 동일한 형태로 접근이 가능해진다.
#include "academy_review_0511_extern.h"

int main() {

	add();

	printf("%d\n", myValue);
	


	return 0;
}
