#include <iostream>
using namespace std;

int main() 
{
	// 변수를 정의할 때 자료형을 미리 지정해야 한다.
	
	// 내부적으로 메모리를 이미 가지고 있다.
	int i;   // 변수 정의
	i = 123; // 변수에 값 지정

	// sizeof
	cout << i << " " << sizeof(i) << endl; 
	// 123 4
	cout << sizeof(int) << endl;
	// 4
	cout << 123 + 4 << " " << sizeof(123 + 4) << endl;
	// 127 4


	float f = 123.456f; // 마지막에 f 붙이기!
	double d = 123.456; // f 불필요!
	cout << f << " " << sizeof(f) << endl; // 123.456 4
	cout << d << " " << sizeof(d) << endl; // 123.456 8

	// C++은 문자와 문자열을 구분
	char c = 'a';
	char str[] = "Hello, World!";  // std::string

	cout << c << " " << sizeof(c) << endl; // a 1

	// 형변환
	i = 987.654; // double형을 int에 강제로 저장
	cout << "int from double" << i << endl; // 987 => 소수점 뒤 버림

	f = 567.89; // float에 double형을 강제로 저장

	// 기본 연산자
	// i = 987;
	i += 100; // i = i + 100; // 1087
	i++; // 1087++;
	cout << i << endl; // 1088

	// 불리언
	bool is_good = true;
	is_good = false;

	cout << is_good << endl; // 0 => false

	//boolalpha는 글자로 true 또는 false로 출력되게 하려면 boolalpha
	cout << boolalpha << true << endl;   // true
	cout << is_good << endl;             // false;
	cout << noboolalpha << true << endl; // 1

	// 논리 연산
	cout << boolalpha;
	cout << (true && true) << endl;
	cout << (true || false) << endl;

	// 비교
	cout << (1 > 3) << endl;
	cout << (3 == 3) << endl;
	cout << (i >= 3) << endl;
	cout << ('a' != 'c') << endl;
	cout << ('a' != 'a') << endl;

	// 영역 (scope)

	i = 123; // 더 넓은 영역

	{
		int i = 345;  // <- 더 좁은 영역의 다른 변수 i 
		cout << i << endl; // 345 출력
	}

	cout << i << endl; // 123 출력

	return 0;
}