#include <iostream>
using namespace std;

int main() 
{
	int a = 1;
	int b = 2;
	int c = 3;

	// 같은 자료형의 데이터를 저장하기 위해 메모리를 미리 잡아놓은
	int my_array[3] = { 1, 2, 3 }; // 초기화 할 때는 {} 안에 값 나열

	// 인덱싱 (zero-based)
	cout << my_array[0] << " " << my_array[1] << " " << my_array[2] << endl;

	// 인덱싱으로 하나 짜리 변수 처럼 사용 가능
	my_array[1] = 5;

	cout << my_array[0] << " " << my_array[1] << " " << my_array[2] << endl;

	//인덱스 범위가 벗어나면 오류 발생
	//cout << my_array[1000] << endl;

	// 문자열은 기본적으로 문자열 배열
	char name[14] = "Hello, World!"; // 문자''와 문자열"" 구분!
	// Hello, World!는 13글자이지만 끝에 Null Character '\0'가 안보이지만 존재하기 때문에 [14]이다.
	cout << name << " " << sizeof(name) << endl;

	name[0] = 'A';
	name[1] = 'B';
	name[2] = 'C';

	cout << name << endl;

	name[2] = '\0'; //널 캐릭터로 바꾸면 뒤에는 출력이 되지 않는다.

	cout << name << endl;

	return 0;
}