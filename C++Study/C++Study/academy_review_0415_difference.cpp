// ����ü -> Ŭ����
// stl �ڵ尣��ȭ
// ��ü���� ���α׷�(oop : object oriented programming)
// ��ý(object) : ���������� �����ϰų� �߻������� ������ �� �ִ� �� �߿��� �ڽ��� �Ӽ��� ������ �ְ� �ٸ� �Ͱ� �ĺ� ������ ��
// ��ü : ������ �����ϴ� �� -> �Ӽ� + ����
// ��ü : ���� ��ü�� ���� �� �� ��ü�� �����θ� �θ��� �̸�
// ��ü : ���� �� ���� �ٸ� ��ü�� �θ��� �̸� -> �Ӽ� + ����
// �Ӽ� : ��� ����
// ����(�ൿ) : ��� �Լ�
// �߻�ȭ(abstraction) : ������ �ڷ�, ���, �ý��� �����κ��� �ٽ����� ���� �Ǵ� ����� ���߷� ���� ���� ���Ѵ�.
// ��� : ingeritance : �ڵ��� ����, ���뼺, �������� ������.
// ������ : ����� �����̴�(o), ������ ����̴�(x) a is b  ��� -> ����  �ڽ�Ŭ���� -> �θ�Ŭ����


//#include <iostream>
#include <cstdio>


//struct Person
//{
//	int age;
//	int hp;
//};


struct Animal
{
	int age = 1;
	int legs = 2;
	int arms = 2;
};

struct tiger : public Animal{
	int age = 2;
};




int main() {

	//int* arr = (int*)malloc(sizeof(int) * 10);
	//free(arr);

	//int* arr = new int[100];
	//delete[] arr;


	//Person* p1 = (Person*)malloc(sizeof(Person));
	//free(p1);
	
	//Person p1 = new Person();
	//delete p1;

	//std::cout << "Hello World" << std::endl;
	//printf("Hello World");

	tiger t1;
	printf("%d", t1.age);

	return 0;
}



