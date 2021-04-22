
#include <cstdio>

class Vector3 {
public:

	float x;
	float y;
	float z;

	Vector3(float x, float y, float z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	Vector3() {
		x = 0;
		y = 0;
		z = 0;
	}

	void printInfo() {
		printf("%.2f,%.2f,%.2f", x, y, z);
	}
};

Vector3 operator*(Vector3& v1, float s) {
	return Vector3(v1.x * s, v1.y * s, v1.z * s);
}


int main() {

	Vector3 v = Vector3(10, 20, 30);
	Vector3 result = v * 10;

	result.printInfo();


	return 0;
}