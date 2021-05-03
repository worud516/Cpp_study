#include <cstdio>
#include <iostream>
using namespace std;




// main 함수의 3종류 타입
// int main() { 코드 }
// int main( int argc, char * argv[]) { 코드 }
// int main( int argc, char * argv[], parameters) { 코드 }


// 거의 모든 시스템은 3종류의 표준 입출력을 기본으로 제공한다.
// 표준입력 : Standard input --> stdin
// 표준출력 : Standard output --> stdout
// 표준에러출력 : Standard error --> stderr



int main() {


	// std::cout	==>	C의 printf        sid::cout 을 사용하려면 iostream 해더 파일 필요
	// <<   (삽입 연산자)

	// std는 "standard"의 약자 : 표준 네임스페이스를 의미
	// :: 더블콜론, 범위 확인 연산자 (Scope resolution operator)
	// endl( end of line) == \n
	// std::cout  표준 출력변수 타입은 ostream

	std::cout << "Hello World!" << std::endl;	
	std::cout << "Hello" << "World!" << std::endl;
		
	// std::cin 표준 입력번수 타입은 istream
	// 사용법
	// int m, k;
	// std::cin >> m >> k;
	// std::cout << m << ' ' k << std::endl;

	// std::cerr 표준 에러 출력변수 타입은 ostream
	// 사용법
	// std::cerr << "에러발생" << std::endl;
	


	return 0;
}