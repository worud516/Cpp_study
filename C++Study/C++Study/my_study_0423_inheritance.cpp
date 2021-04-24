#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

// �θ�(����, ����, ���) Ŭ����
class Parent {
private:  // protected ������ ����ϸ� �θ� Ŭ������ �θ� Ŭ������ ��ӹ��� �ڽ� Ŭ�������� ������ �� �ִ�.
	
	char name[20];
	bool gender;

public:
	Parent() {
		strcpy(name, "����");
		gender = true;
	}

	Parent(const char name[20], bool gender) {
		strcpy(this->name, name);
		this->gender = gender;
	}

	char* getName() {
		return name;
	}

	bool isGender() {
		return gender;
	}

	void setName(const char name[20]) {
		strcpy(this->name, name);
	}

	void setGender(bool gender) {
		this->gender = gender;
	}


	void toString() {
		printf("%s (%s)\n", name, gender == true ? "����" : "����");
	}
};


// �ڽ�(����, ����, �Ļ�) Ŭ����
// ����̶� �θ� Ŭ�������� ������ ��� ������ �Լ��� �ڽ� Ŭ�������� �������� �ʾƵ� �׷��� ����� �� �ִ� ���� �ǹ��Ѵ�.
// class �ڽ�Ŭ�����̸� : ��ӱ��������� �θ�Ŭ�����̸�
// ��� ���� ������
// private		: �θ� Ŭ�������� ������ ���� ���� ������ ������� ������ private���� ��ӵȴ�.
// protected	: �θ� Ŭ������ private ������ private���� �������� protected �������� ��ӵȴ�.
// public			: �θ� Ŭ������ ���� ���� �״�� ��ӵȴ�.
class Child : public Parent{
private:
	int age;
	char nickName[20];

public:
// �θ� Ŭ�������� ��ӹ��� ��� ������ ���ٱ����� private�̸� �ڽ� Ŭ�������� ������ �� ����.
	Child() {

	}

// �θ� Ŭ������ ���� ��ӹ��� ��� ������ ���� ������ private�� ��� �ʱ�ȭ �ϴ� ����� 2������ �ִ�.
// ù��° ����� �θ� Ŭ������ �����ڸ� �����ؼ� �ʱ�ȭ ��Ų��.
// �ι�° ����� �θ� Ŭ������ setter�� ���ǵǾ� �ִٸ� setter �Լ��� ����� �ʱ�ȭ ��Ų��.

	/* ù��°
	Child(const char name[20], bool gender, int age, const char nickName[20]) : Parent(name, gender) {
//		strcpy(this->name, name);
//		this->gender = gender;
		this->age = age;
		strcpy(this->nickName, nickName);
	};
	*/


	// �ι�°
	// �θ� Ŭ������ ���� ��ӹ��� ��� ������ ���� ������ protected(7line)�� ��� setter�� ������� �ʰ� ���ó�� this �ʱ�ȭ�� �����ϴ�. 
	Child(const char name[20], bool gender, int age, const char nickName[20]) {
		setName(name);
		setGender(gender);
		this->age = age;
		strcpy(this->nickName, nickName);
	}




// �θ� Ŭ������ ���� ��ӹ��� �Լ��� ����� ������� ���� ��� �ڽ� Ŭ�������� �ٽ� ����� ����ϸ� �ȴ�. -> �������̵�
	void toString() {
		printf("%s (%s) %d %s\n", getName(), isGender() == true ? "����" : "����", age, nickName);
	}
};




int main() {

	Parent parent1;
	parent1.toString();

	Parent parent2("ȫ�浿", true);
	parent2.toString();


	Child child("������", false, 16, "�̻���");
	child.toString();


	return 0;
}