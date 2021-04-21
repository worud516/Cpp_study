#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

// 정적(static) 변수 : 변수 선언시 초기치를 정하면 프로그램 중간에 변수를 다시 만들어 초기화를 시킬수 없는 변수
// 현재 클래스로 생성되는 모든 객체에 변수를 공유해서 사용한다.
class Score {
private:
	// 정적 멤버 변수는 선언시 "="를 이용해서 초기화 시킬 수 없다.
	// static int count = 0;  에러 발생
	// 정적 멤버 변수는 변수만 선언하고 초기화는 클래스 외부에서 시켜야 한다.
	static int count; 
	int no;
	char name[20];
	int cpp, java, jsp, total;
	double average;

public:
	Score() {

	}
	Score(const char* name, int cpp, int java, int jsp) {
		this->no = ++count;
		strcpy(this->name, name);
		this->cpp = cpp;
		this->java = java;
		this->jsp = jsp;
		total = cpp + java + jsp;
		average = (double)total / 3;
	}

	void toString() {
		printf("%d. %s님의 평균 점수는 %.2lf점 입니다.\n", no, name, average);
	}

};

// 클래스 이름 뒤에 "::"를 사용하면 현재 클래스에 포함된 멤버를 의미한다.
int Score::count = 0; // Score 클래스의 정적 멤버 변수 count를 초기화 시킨다.
// => 정수형 변수 Score클래스 안에 있는 count를 0으로 초기화 한다.

int main() {

	Score score("홍길동",100,100,99);
	score.toString();

	Score* score2 = new Score("홍길순", 100, 90, 80);
	score2->toString();


	delete score2;



	return 0;
}