#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

// ����(static) ���� : ���� ����� �ʱ�ġ�� ���ϸ� ���α׷� �߰��� ������ �ٽ� ����� �ʱ�ȭ�� ��ų�� ���� ����
// ���� Ŭ������ �����Ǵ� ��� ��ü�� ������ �����ؼ� ����Ѵ�.
class Score {
private:
	// ���� ��� ������ ����� "="�� �̿��ؼ� �ʱ�ȭ ��ų �� ����.
	// static int count = 0;  ���� �߻�
	// ���� ��� ������ ������ �����ϰ� �ʱ�ȭ�� Ŭ���� �ܺο��� ���Ѿ� �Ѵ�.
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
		printf("%d. %s���� ��� ������ %.2lf�� �Դϴ�.\n", no, name, average);
	}

};

// Ŭ���� �̸� �ڿ� "::"�� ����ϸ� ���� Ŭ������ ���Ե� ����� �ǹ��Ѵ�.
int Score::count = 0; // Score Ŭ������ ���� ��� ���� count�� �ʱ�ȭ ��Ų��.
// => ������ ���� ScoreŬ���� �ȿ� �ִ� count�� 0���� �ʱ�ȭ �Ѵ�.

int main() {

	Score score("ȫ�浿",100,100,99);
	score.toString();

	Score* score2 = new Score("ȫ���", 100, 90, 80);
	score2->toString();


	delete score2;



	return 0;
}