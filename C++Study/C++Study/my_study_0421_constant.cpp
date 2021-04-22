#include <cstdio>


// ��� constant  == const
// C++���� Ŭ������ ����� ����� ������ ��� "="�� ����ؼ� �ʱ�ȭ�� ������ �߻��Ǹ� �����ڿ��� �ʱ�ȭ ����Ʈ�� ����� �ʱ�ȭ ��Ų��.
// ����� ��ü�� ������ �� �ݵ�� �ʱ�ȭ�� ���Ѿ� �Ѵ�.
class Constant {
private:
	double r;

public: // �⺻ ������ ������ �ʾƵ� �����Ϸ��� �˾Ƽ� ����
	const double PI = 3.14;

//	�������� �ʱ�ȭ ����Ʈ
// �������� () �ڿ� ":"�� ��� ������(�ʱ�ġ) ���·� ������ �ʱ�ȭ ��ų �� �ִ�.
	Constant() {

	}
	Constant(double r) {
		this->r = r;
	}

	//���� 12���ο��� �ʱ�ȭ�� ���ϰ� const double PI; �� ������ �ذ� ���� ����ؾ���.
	/*Constant(double r) :  PI(3.14){
		this->r = r;
	}*/
	void toString() {
		printf("%.2lf", r);
	}


};




int main() {


	Constant constant;	// Ŭ������ �⺻ �����ڸ� �̿��ؼ� ��ü�� �����Ѵ�.
	// constant.PI = 100.0;		����� ���α׷����� ���� ������ �� �����Ƿ� ������ �߻��ȴ�. 
	printf("%.2lf\n", constant.PI); 

	double r = 0.0;
	printf("�������� �Է����ּ��� : ");
	scanf_s("%lf", &r);
	Constant constant2(r);
	constant2.toString();

	


	return 0;
}