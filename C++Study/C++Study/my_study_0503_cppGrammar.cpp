#include <cstdio>
#include <iostream>
using namespace std;




// main �Լ��� 3���� Ÿ��
// int main() { �ڵ� }
// int main( int argc, char * argv[]) { �ڵ� }
// int main( int argc, char * argv[], parameters) { �ڵ� }


// ���� ��� �ý����� 3������ ǥ�� ������� �⺻���� �����Ѵ�.
// ǥ���Է� : Standard input --> stdin
// ǥ����� : Standard output --> stdout
// ǥ�ؿ������ : Standard error --> stderr



int main() {


	// std::cout	==>	C�� printf        sid::cout �� ����Ϸ��� iostream �ش� ���� �ʿ�
	// <<   (���� ������)

	// std�� "standard"�� ���� : ǥ�� ���ӽ����̽��� �ǹ�
	// :: �����ݷ�, ���� Ȯ�� ������ (Scope resolution operator)
	// endl( end of line) == \n
	// std::cout  ǥ�� ��º��� Ÿ���� ostream

	std::cout << "Hello World!" << std::endl;	
	std::cout << "Hello" << "World!" << std::endl;
		
	// std::cin ǥ�� �Է¹��� Ÿ���� istream
	// ����
	// int m, k;
	// std::cin >> m >> k;
	// std::cout << m << ' ' k << std::endl;

	// std::cerr ǥ�� ���� ��º��� Ÿ���� ostream
	// ����
	// std::cerr << "�����߻�" << std::endl;
	


	return 0;
}