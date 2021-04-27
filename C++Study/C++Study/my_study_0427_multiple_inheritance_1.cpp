#include <cstdio>


class Date {
private:
public:
	int year, momth, day;
	//Date() {
	//}
	Date(int year = 0, int momth = 0, int day = 0) {
		this->year = year;
		this->momth = momth;
		this->day = day;
	}
	void toString() {
		printf("%d년 %d월 %d일\n", year, momth, day);
	}
};


class Time {
private:
public:
	int hour, minute, second;
	//Time() {
	//}
	Time(int hour = 0, int minute = 0, int second = 0) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	void toString() {
		printf("%d시 %d분 %d초\n", hour, minute, second);
	}
};

// Date 클래스와 Time 클래스를 상속받아 Now 클래스를 만든다.

class Now : public Date, public Time {
private:
public:
	Now() /*: Date(), Time()*/ {
	}

	Now(int year, int momth, int day, int hour, int minute, int second ) {
		this->year = year;
		this->momth = momth;
		this->day = day;
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	void toString() {
		printf("지금은 %d년 %d월 %d일 %d시 %d분 %d초\n", year, momth, day, hour, minute, second);

		// Date::toString();
		// Time::toString();
	}

};


int main() {

	Date date(2021, 04, 27);
	date.toString();

	Time time(12, 23, 45);
	time.toString();

	Now now;
	// now.toString();			에러발생 
	// now.Date::toString();	Date 클래스의 toString 실행
	// now.Time::toString();	Time 클래스의 toString 실행
	now.toString(); // 오버라이드 하면 사용가능


	Now now1(2021, 04, 27, 12, 42, 15);
	now1.toString();

	return 0;
}