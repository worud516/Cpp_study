#ifndef __HOUSE_H__
#define __HOUSE_H__

class Animal;		//Ŭ������ �Լ��� ���������� ���漱���� �����ϴ�.

class House {
public:
	Animal* animal;

	void setAnimal(Animal* a);

	class Goo;		//���漱��

	class Foo {
	public:
		Goo* g;
	};
	class Goo {
	public:
		Foo* f;
	};

};



#endif
