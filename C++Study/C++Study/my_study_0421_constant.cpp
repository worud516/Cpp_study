#include <cstdio>


// 상수 constant  == const
// C++에서 클래스의 멤버로 상수를 정의할 경우 "="을 사용해서 초기화시 에러가 발생되면 생성자에서 초기화 리스트를 사용해 초기화 시킨다.
// 상수는 객체가 생성될 때 반드시 초기화를 시켜야 한다.
class Constant {
private:
	double r;

public: // 기본 생성자 만들지 않아도 컴파일러가 알아서 만듬
	const double PI = 3.14;

//	생성자의 초기화 리스트
// 생성자의 () 뒤에 ":"을 찍고 변수명(초기치) 형태로 변수를 초기화 시킬 수 있다.
	Constant() {

	}
	Constant(double r) {
		this->r = r;
	}

	//만약 12라인에서 초기화를 안하고 const double PI; 만 했으면 밑과 같이 사용해야함.
	/*Constant(double r) :  PI(3.14){
		this->r = r;
	}*/
	void toString() {
		printf("%.2lf", r);
	}


};




int main() {


	Constant constant;	// 클래스의 기본 생성자를 이용해서 객체를 생성한다.
	// constant.PI = 100.0;		상수는 프로그램에서 값을 변경할 수 없으므로 에러가 발생된다. 
	printf("%.2lf\n", constant.PI); 

	double r = 0.0;
	printf("반지름을 입력해주세요 : ");
	scanf_s("%lf", &r);
	Constant constant2(r);
	constant2.toString();

	


	return 0;
}