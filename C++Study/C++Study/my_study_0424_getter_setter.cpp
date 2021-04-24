#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>



class Parent {
private:
	char name[20];
	bool gender;
	
public:
	// Parent() {
	// }
	// ����Ʈ �μ��� ����ϴ� ������ 
	// ����Ʈ �μ��� ����ϸ� �Լ��� ȣ��� �� �μ��� �Ѿ���� ������ ����Ʈ �μ��� ������ ������ �Լ��� �����ϰ�
	// �μ��� �Ѿ���� �Ѿ�� ������ �Լ��� �����Ѵ�.
	// ����Ʈ �μ��� ��� �μ��� ����ؾ� �ϸ� �κ������� ����� �� ����.
	Parent(const char name[20] = "����", bool gender = false) {
		strcpy(this->name, name);
		this->gender = gender;
	}

	void toString() {
		printf("%s(%s)\n", name, gender == true ? "����":"����");
	}

	// getter & setter �Լ� : private���� ���� ������ ������ ����� ���� �����ϰų� ���� ��� ����� ����Ѵ�.
	// getter �Լ��� �̸��� get���� �����ϰ� ��� ���� �̸��� ��� �����.		���� ž���� ��� ������ �ڷ����� ���� �μ��� ���� �ʴ´�.
	char* getName() {
	// �Լ��� ���� ���� �ּ�(������, �迭��, ���ڿ�)�� ��� �Լ� �̸��տ� "*"�� �ٿ��ش�.
		return name;
	}

	bool isGender() {
		return gender;
	}


	// setter �Լ��� �̸��� set���� �����ϰ� ��� ���� �̸��� ��� �����.		���� Ÿ���� "void"�� ����ϰ� ����� ������ ���� �μ��� �޴´�.
	void setName(const char name[20]) {
		strcpy(this->name, name);
	 }

	void setGender(bool gender) {
		this->gender = gender;
	}

};


int main() {

	Parent parent1;
	parent1.toString();
	Parent parent2("ȫ�浿", true);
	parent2.toString();

	//printf("%s",parent2.name);		name�� private ��� �̹Ƿ� Ŭ���� �ܺο��� �����Ϸ� �߱� ������ ������ �߻��ȴ�.
	printf("%s\n",parent2.getName());
	printf("%s\n",parent2.isGender() ? "����":"����");

	parent2.setName("ȫ���");
	printf("%s\n", parent2.getName());

	parent2.setGender(false);
	printf("%s\n", parent2.isGender() ? "����" : "����");

	return 0;
}