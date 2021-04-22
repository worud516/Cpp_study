//������ �����ε�		+,-,*,/  �⺻ �ڷ������� ��ȿ
#include <cstdio>

class Vector {
public:
	float X;
	float Y;

	Vector(float X, float Y) {
		this->X = X;
		this->Y = Y;
	}

	Vector() {
		X = 0.0f;
		Y = 0.0f;
	}

	void PrintInfo() {
		printf("%.2f,%.2f", X, Y);
	}

};

Vector operator+(Vector& v1, Vector& v2) {
	return Vector(v1.X + v2.X, v1.Y + v2.Y);
}

int main() {
	Vector v1 = Vector(100, 200);
	Vector v2 = Vector(1, 2);

	Vector v3 = v1 + v2;

	v3.PrintInfo(); // �������� �Ҵ�� Ŭ���� �ν��Ͻ����� �����Ѵ�.


	return 0;
}

//cpp���� ������ �����ε��� �����ϰ� �̰� Ȱ���ϴ� ���¼ҽ� ���̺귯���� ����.