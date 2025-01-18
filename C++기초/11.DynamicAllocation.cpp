#include <iostream>
#include <cstring>
using namespace std;

const int kMaxStr = 100; // 전역 상수

int Min(int a, int b)
{
	return a < b ? a : b; // 삼항 연산자
}

int main() 
{
	// 문자열 복사
	char str1[] = "Hello, World!";
	char str2[kMaxStr];
	// str2 = str1; Error

	// dest, src           // sizeof(배열이름)은 배열이 사용하는 메모리 전체 크기
	memcpy(str2, str1, Min(sizeof(str1), sizeof(str2)));
	cout << str2 << endl; // Hello, World!

	char* dynamic_array = new char[kMaxStr];
	// 주의 : 동적할당 메모리는 변수 사이즈가 포인터 사이즈이다.(배열이 아니다)
	memcpy(dynamic_array, str1, Min(sizeof(str1), kMaxStr));
	cout << dynamic_array << endl;

	cout << str1 << " " << str2 << " " << dynamic_array << endl;
	cout << size_t(str1) << " " << size_t(str2) << " " << size_t(dynamic_array) << endl; 
	// 10진수로 바꾸면 dynamic_array 주소만 숫자가 많이 다르다. 이는 정적 배열은 스택에 있고 동적 배열은 힙에 있기 때문에 주소값에서도 차이가 많이난다.

	delete[] dynamic_array; // 배열 삭제시 [] / 프로그램이 끝나기전에 동적할당 받은 메모리를 삭제시켜줘야한다.

	// 기존 동적할당 받은 메모리를 삭제하지 않고 변수에 재할당 할경우 기존 동적할당 받은 메모리를 잃어버린다.
	// dynamic_array = new char[원하는 크기]; 그래서 원래 있던것을 지우고 새로 다시 동적할당을 받아야 한다.
	// delete[] dynamic_array; 그리고 새로 할당 받은 메모리도 다 사용하면 지워야 한다.

	return 0;
}

