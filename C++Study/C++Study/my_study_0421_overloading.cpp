//오버로딩(overloading) : 동일한 이름을 갖고있지만 다른동작을 하게 만드는 것
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
class Student {   //클래스 내부에서도 동일하게 적용
public:
    int student_no;
    char student_name[100];

    Student() { // 함수취급
        student_no = 0;
        strcpy(student_name, "홍길동");
    }

    Student(int studentNo, const char* student_name) {
        this->student_no = studentNo;
        strcpy(this->student_name, student_name);
    }

    void printInfo() {
        printf("%s 학생의 번호 : %d\n", student_name, student_no);
    }

};

int main() {

    Student* s1 = new Student();
    Student* s2 = new Student(10, "홍길순");
    s1->printInfo();
    s2->printInfo();
    //   int v1 = 10;
    //   float v1 = 20;
    //   sum(100, 200);
    //   sum(1, 2, 3);
    //   sum(1, 1.0f);




    return 0;
}