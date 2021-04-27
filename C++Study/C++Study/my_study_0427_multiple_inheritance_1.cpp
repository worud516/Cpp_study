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
		printf("%d�� %d�� %d��\n", year, momth, day);
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
		printf("%d�� %d�� %d��\n", hour, minute, second);
	}
};

// Date Ŭ������ Time Ŭ������ ��ӹ޾� Now Ŭ������ �����.

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
		printf("������ %d�� %d�� %d�� %d�� %d�� %d��\n", year, momth, day, hour, minute, second);

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
	// now.toString();			�����߻� 
	// now.Date::toString();	Date Ŭ������ toString ����
	// now.Time::toString();	Time Ŭ������ toString ����
	now.toString(); // �������̵� �ϸ� ��밡��


	Now now1(2021, 04, 27, 12, 42, 15);
	now1.toString();

	return 0;
}