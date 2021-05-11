// STL : Standard Templete Library

#include <cstdio>
#include <string>


template <typename T>	// 이 클래스 내부에는 타입이 지정되지 않은 무언가가 있다.
class MyClass {
public:
	T value;
};


template <typename T>	// 이 클래스 내부에는 타입이 지정되지 않은 무언가가 있다.
void swap(T* a, T* b) {
	T tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}




int main() {

	MyClass<int>* m = new MyClass<int>();
	m->value = 100;

	MyClass<std::string>* ms = new MyClass<std::string>();
	ms->value = "Hello World!";
	
	/*
	int value1 = 100;
	int value2 = 200;

	printf("value1 : %d\n", value1);
	printf("value2 : %d\n\n", value2);

	swap<int>(&value1, &value2);

	printf("value1 : %d\n", value1);
	printf("value2 : %d\n", value2);
	*/
	
	std::string value1 = "Hello";
	std::string value2 = "World!";

	printf("value1 : %s\n", value1.c_str());
	printf("value2 : %s\n\n", value2.c_str());

	swap<std::string>(&value1, &value2);

	printf("value1 : %s\n", value1.c_str());
	printf("value2 : %s\n", value2.c_str());

	return 0;
}