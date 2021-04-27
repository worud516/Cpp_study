#include "my_task_EmployeeManagement.h"

int main() {

	Employee* employee[100];
	int count = 0;  //몇명의 사원이 있는지 기억
	//사원보기
	//사원추가
	//사원삭제
	//프로그램종료

	while (true) {
		printf("명령어를 입력하세요\n");
		printf("1. 사원 보기\n");
		printf("2. 사원 추가\n");
		printf("3. 사원 삭제\n");
		printf("4. 프로그램 종료\n");

		fseek(stdin, 0, SEEK_END);
		int input;
		scanf("%d", &input);

		if (input == 1) {
			//사원보기
			for (int i = 0; i < count; i++) {
				employee[i]->printInfo();
			}
		}
		else if (input == 2) {
			//사원추가
			char* name = getString("사원명을 입력해주세요 :");
			int gender = getInt("성별을 입력해주세요(1 남성 (2 여성 :");
			char* rank = getString("직급을 입력해주세요 :");

			Employee* e = new Employee(name, gender, rank);

			delete[] name;
			delete[] rank;      //동적으로 할당된 변수 삭제

			employee[count] = e;   //등록
			count++;
		}
		else if (input == 3) {
			//사원 삭제
			int number = getInt("사원번호를 입력해주세요 \n");
			int deletedIndex = -1;

			for (int i = 0; i < count; i++) {
				if (number == employee[i]->no) {	//삭제가 된다면
					delete employee[i];					
					deletedIndex = i;
					break;
				}
			}
			if (deletedIndex >= 0) {	//위에서 정말로 삭제가 되었단 뜻
				for (int i = deletedIndex; i < count - 1; i++) {
					employee[i] = employee[i + 1];	//인덱스 한칵씩 땡겨오기
				}
			}
			count--;
			printf("삭제되었습니다.");
		}
		else if (input == 4) {
			//프로그램 종료
			printf("프로그램을 종료합니다.");
			break;
		}
		else {
			//올바르지 않은 입력
			printf("올바르지 않은 입력입니다.\n");
		}
	}


	return 0;
}

int getInt(const char* prompt) { //정수 받아오기
	int input;
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);
	return input;
}

char* getString(const char* prompt) { //문자 받아오기
	char* input = new char[100];
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input);  //99개 문자를 받아서 스트링으로 input에 저장
	return input;
}