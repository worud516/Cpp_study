#include <cstdio>

class Time;	// Time 클래스의 전방 선언

class Date {
	// 접근 권한이 private으로 설정된 멤버 변수는 클래스 외부에서 접근할 수 없으므로 friend를 설정해서 접근할 수 있게 한다.
	// 외부 함수를 friend로 설정하면 friend로 설정된 함수는 현재 클래스의 모든 private 멤버에 자유롭게 접근할 수 있다.
	// 외부 함수를 friend로 설정하는 방법은 friend로 설정할 숨수의 원형을 쓰고 앞에 friend만 붙여주면 된다.
	// 프랜드는 상속은 안됨;
	friend void now(Date, Time);

private:
	int year, month, day;

public:
	// 디폴트 인수를 사용하는 생성자
	// year, month, day 값이 인수로 넘어오면 넘어오는 값으로 멤버 변수를 초기화 하고 넘어오지 않으면 "=" 뒤에 있는 디폴트 인수로 초기화 시킨다.
	// 디폴트 인수를 사용하려면 모든 인수에 사용해야 한다.
	Date(int year = 0, int month = 0, int day = 0) {
		this->year = year;
		this->month = month;
		this->day = day;
	}

	void toString() {
		printf("%d년 %d월 %d일\n", year, month, day);
	}


};

class Time {
	friend void now(Date, Time);
private:
	int hour, minute, second;
public:
	Time(int hour = 0, int minute = 0, int second = 0) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}

	void toString() {
		printf("%d시 %d분 %d초\n", hour, minute, second);
	}
};


void now(Date date, Time time) {
	printf("지금은 %d년 %d월 %d일 %d시 %d분 %d초 입니다.", date.year, date.month, date.day, time.hour, time.minute, time.second);
}



int main() {

	Date date;
	date.toString();

	Date date2(2021, 04, 29);
	date2.toString();
	

	Time time;
	time.toString();

	Time time2(16, 25, 43);
	time2.toString();



	now(date2, time2);


	return 0;
}








