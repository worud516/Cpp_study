#include <cstdio>

class Time;	// Time Ŭ������ ���� ����

class Date {
	// ���� ������ private���� ������ ��� ������ Ŭ���� �ܺο��� ������ �� �����Ƿ� friend�� �����ؼ� ������ �� �ְ� �Ѵ�.
	// �ܺ� �Լ��� friend�� �����ϸ� friend�� ������ �Լ��� ���� Ŭ������ ��� private ����� �����Ӱ� ������ �� �ִ�.
	// �ܺ� �Լ��� friend�� �����ϴ� ����� friend�� ������ ������ ������ ���� �տ� friend�� �ٿ��ָ� �ȴ�.
	// ������� ����� �ȵ�;
	friend void now(Date, Time);

private:
	int year, month, day;

public:
	// ����Ʈ �μ��� ����ϴ� ������
	// year, month, day ���� �μ��� �Ѿ���� �Ѿ���� ������ ��� ������ �ʱ�ȭ �ϰ� �Ѿ���� ������ "=" �ڿ� �ִ� ����Ʈ �μ��� �ʱ�ȭ ��Ų��.
	// ����Ʈ �μ��� ����Ϸ��� ��� �μ��� ����ؾ� �Ѵ�.
	Date(int year = 0, int month = 0, int day = 0) {
		this->year = year;
		this->month = month;
		this->day = day;
	}

	void toString() {
		printf("%d�� %d�� %d��\n", year, month, day);
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
		printf("%d�� %d�� %d��\n", hour, minute, second);
	}
};


void now(Date date, Time time) {
	printf("������ %d�� %d�� %d�� %d�� %d�� %d�� �Դϴ�.", date.year, date.month, date.day, time.hour, time.minute, time.second);
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








