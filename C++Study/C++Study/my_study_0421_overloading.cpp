//�����ε�(overloading) : ������ �̸��� ���������� �ٸ������� �ϰ� ����� ��
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>



/*
int sum(int a, int b) {
   printf("sum(int,int)");
   return a+b;
}
int sum(int a, int b,int c) {
   printf("sum(int,int,int)");
   return a+b+c;
}
float sum(int a, float b) {
   printf("sum(int,float)");
   return a + b;
}
*/
class Student {   //Ŭ���� ���ο����� �����ϰ� ����
public:
    int student_no;
    char student_name[100];

    Student() { // �Լ����
        student_no = 0;
        strcpy(student_name, "ȫ�浿");
    }

    Student(int studentNo, const char* student_name) {
        this->student_no = studentNo;
        strcpy(this->student_name, student_name);
    }

    void printInfo() {
        printf("%s �л��� ��ȣ : %d\n", student_name, student_no);
    }

};

int main() {

    Student* s1 = new Student();
    Student* s2 = new Student(10, "ȫ���");
    s1->printInfo();
    s2->printInfo();
    //   int v1 = 10;
    //   float v1 = 20;
    //   sum(100, 200);
    //   sum(1, 2, 3);
    //   sum(1, 1.0f);




    return 0;
}