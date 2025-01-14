#include <iostream>
using namespace std;

int main() 
{
	int a = 123;

	// address of 주소 연산자 & ampersand(앰퍼샌드)
	cout << a << " " << &a << endl;

	int* b = &a; // b에 주소 대입 // 주소 값을 저장할 때에는 *을 붙인다.
	// deference operator (역참조 연산자)
	cout << b << " " << *b << endl; // *b은 b에 저장되어있는 주소에 저장되어있는 값을 가져온다.

	*b = 567;

	cout << a << " " << b << " " << *b << endl; 

	// 포인터 자체의 주소 크기와 자료형의 크기 (주소의 크기는 항상 동일)
	double* c = 0; // 아무 주소도 가리키고 있지 않다는 의미로 초기화
	
	cout << sizeof(int) << " " << sizeof(double) << endl; // 4 8
	cout << sizeof(int*) << " " << sizeof(double*) << endl;
	cout << sizeof(b) << " " << sizeof(c) << endl;


	// 포인터 연산과 배열

	// size_t (아래에서는 주소를 10진수로 변환 용도로 사용)
	cout << sizeof(size_t) << endl; // 8
	cout << size_t(b) << " " << size_t(b + 1) << " " << size_t(b + 2) << endl;
	cout << size_t(c) << " " << size_t(c + 1) << " " << size_t(c + 2) << endl;

	// sizeof(char) == 1
	char* e = 0;
	cout << size_t(e + 15) << endl;
	
	// 문자열, 배열 연결시키기
	
	int my_array[] = { 23, 38, 56, 69, 72 };
	
	char my_str[] = { 'h', 'e', 'l', 'l', 'o' }; // "Hello"

	char* ptr = my_str; // 배열의 이름은 포인터
	
	cout << *(ptr + 3) << endl;
	cout << ptr[4] << endl; 

	return 0;
}