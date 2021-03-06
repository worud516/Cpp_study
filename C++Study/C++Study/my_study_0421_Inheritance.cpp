#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Animal { //상속해주는 클래스의 멤버 변수, 함수를 외부세어도 활용할수있다.
public: // public :아무나		protected : 외부x 내부o(자식은 내부임)		private:해당 클래스 안에서만 사용 가능		3개를 접근 지정자라고함
	int legs;
	char name[50];

	Animal(int legs, const char* name) {
		printf("동물생성자 실행\n");
		this->legs = legs;
		strcpy(this->name, name);
	}

	void printfAnimalinfo() {
		printf("다리의 갯수 : %d\n", legs);
		printf("이름 : %s\n", name);
	}
};

class Person : public Animal{
public:
	char regist_no[30];

	Person(const char* regist_no) : Animal(2, "사람"){
		printf("사람생성자 실행\n");
		printf("%s\n", regist_no);
		//legs = 2;
		//strcpy(name, "사람");
	}
};

class dog : public Animal {
public:
	dog() : Animal(4, "강아지") {
		printf("dog 생성자 실행\n");
	}
};


int main() { //정적인 클래스보다 동적인 클래스에서 더 많이 사용한다.

	Person* p = new Person("1234-9999");

	p->printfAnimalinfo();

	dog* d = new dog();
	d->printfAnimalinfo();

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Animal {//상속해주는 클래스의 멤버 변수, 함수를 외부에서도 활용할 수 있다.
public:   //public:아무나 protected:외부x,내부o private:해당 클래스 내에서만
    int legs;
    char name[50];

public:
    Animal(int legs, const char* name) {
        printf("동물 생성자 실행\n");
        this->legs = legs;
        strcpy(this->name, name);
    }

    void printAnimalInfo() {
        printf("다리의 갯수 : %d\n", legs);
        printf("이름 : %s\n", name);
    }
};


class Person : public Animal {
public:
    char regist_no[30];

    Person(const char* regist_no) : Animal(2, "사람") {
        printf("사람 생성자 실행\n");
        printf("%s\n", regist_no);
        //      legs = 2;
        //      strcpy(name, "사람");
    }

    void printLegs() {
        printf("Person 의 다리 갯수 : %d\n", this->legs);
    }
};

class Dog : public Animal {
public:
    Dog() : Animal(4, "강아지") {
        printf("Dog 생성자 실행\n");
    }
};

int main() { //정적인 클래스보다 동적인 클래스에서 더 많이 사용한다.

    Animal* animal;

    Person* person = new Person("1234-9999");
    //    person->printAnimalInfo();
    printf("person->legs : %d\n", person->legs);

    Dog* dog = new Dog();
    dog->printAnimalInfo();

    //person = (Person*)animal;
//    person = (Person*)dog; //자식끼리의 데이터 구조가 완벽히 동일하면 성공
//    person->printAnimalInfo();

    return 0;
} 


//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstring>
//
//class Animal {//상속해주는 클래스의 멤버 변수, 함수를 외부에서도 활용할 수 있다.
//public:   //public:아무나 protected:외부x,내부o private:해당 클래스 내에서만
//    int legs;
//    char name[50];
//
//public:
//    Animal(int legs, const char* name) {
//        printf("동물 생성자 실행\n");
//        this->legs = legs;
//        strcpy(this->name, name);
//    }
//
//    void printAnimalInfo() {
//        printf("다리의 갯수 : %d\n", legs);
//        printf("이름 : %s\n", name);
//    }
//};
//
//
//class Person : public Animal {
//public:
//    char regist_no[30];
//
//    Person(const char* regist_no) : Animal(2, "사람") {
//        printf("사람 생성자 실행\n");
//        printf("%s\n", regist_no);
//        //      legs = 2;
//        //      strcpy(name, "사람");
//    }
//
//    void printLegs() {
//        printf("Person 의 다리 갯수 : %d\n", this->legs);
//    }
//};
//
//class Dog : public Animal {
//public:
//    Dog() : Animal(4, "강아지") {
//        printf("Dog 생성자 실행\n");
//    }
//};
//
//int main() { //정적인 클래스보다 동적인 클래스에서 더 많이 사용한다.
//
//    Animal* animal;
//
//    Person* person = new Person("1234-9999");
//    //    person->printAnimalInfo();
//    printf("person->legs : %d\n", person->legs);
//
//    Dog* dog = new Dog();
//    dog->printAnimalInfo();
//
//    //person = (Person*)animal;
////    person = (Person*)dog; //자식끼리의 데이터 구조가 완벽히 동일하면 성공
////    person->printAnimalInfo();
//
//    return 0;
//}