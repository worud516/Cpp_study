// std String
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
// #include <cstring>
#include <string>
#include <iostream>




int main() {

	std::string str1 = "apple";
	std::string str2 = "apple";

	/*
	if (str1.compare(str2) == 0) {
		printf("�� ���ڿ��� ����.");
	}
	else {
		printf("�� ���ڿ��� �ٸ���.");
	}
	*/

	if (strcmp(str1.c_str(), str2.c_str()) == 0) {
		printf("�� ���ڿ��� ����.");
	}
	else {
		printf("�� ���ڿ��� �ٸ���.");
	}







	/*
	std::string myStr = "Hello World!";

	myStr = myStr + " Hello C++";

	// printf("%s\n", myStr.c_str());

	std::cout << myStr;
		
	// std::string* myStrPointer; // ����ڰ� �޸� ������ ������Ѵ�.

	// myStr�� Ŭ������ -> Ŭ������ ��Ƽ�� ���·� ���� ����ȯ �ȴ�.
	// �� ���� ����ȯ �� ���ڴ� �ּҰ����� �νĵȴ�.





	
	char myString[100];

	printf("Hello\n");

	strcpy(myString, "Hello World!");
	strcat(myString, " Hello C++1");


	printf("%s\n", myString);
	*/
	
	return 0;
}