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
    //char name[100];  정적
    char* name; //동적
    int gender;
    //char rank[100]; 정적
    char* rank; //동적

    Employee(char* name, int gender, char* rank) {
        this->name = new char[strlen(name) + 1];    // +1 은 널문자까지
        this->rank = new char[strlen(rank) + 1];
        strcpy(this->name, name);
        this->gender = gender;
        strcpy(this->rank, rank);      //포인터를 받아왔기 때문에 
        this->no = number_counter;
        number_counter++;
    }

    ~Employee() {
        delete[] name;
        delete[] rank;
        printf("%d 번 사원이 삭제되었습니다.\n", no);
    }

    void printInfo() {
        printf("사원번호 : %d\n", no);
        printf("사원명 : %s\n", name);
        printf("성별 : %s\n", gender == 1 ? "남성" : "여성");
        printf("직급 : %s\n", rank);
    }
};

int getInt(const char* prompt);

//메모리 해제 
char* getString(const char* prompt);