#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>



int number_counter = 1;


class Employee {
public:
    int no;
    //char name[100];  ����
    char* name; //����
    int gender;
    //char rank[100]; ����
    char* rank; //����

    Employee(char* name, int gender, char* rank) {
        this->name = new char[strlen(name) + 1];    // +1 �� �ι��ڱ���
        this->rank = new char[strlen(rank) + 1];
        strcpy(this->name, name);
        this->gender = gender;
        strcpy(this->rank, rank);      //�����͸� �޾ƿԱ� ������ 
        this->no = number_counter;
        number_counter++;
    }

    ~Employee() {
        delete[] name;
        delete[] rank;
        printf("%d �� ����� �����Ǿ����ϴ�.\n", no);
    }

    void printInfo() {
        printf("�����ȣ : %d\n", no);
        printf("����� : %s\n", name);
        printf("���� : %s\n", gender == 1 ? "����" : "����");
        printf("���� : %s\n", rank);
    }
};

int getInt(const char* prompt);

//�޸� ���� 
char* getString(const char* prompt);