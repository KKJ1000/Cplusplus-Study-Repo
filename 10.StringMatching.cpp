#include <iostream>
using namespace std;

// 문자열 비교 문제 코드

const int kMaxStr = 100; // 전역 변수

// 모든 문자열 배열의 길이가 동일하다고 가정
bool IsEqual(const char* str1, const char* str2)
{
	for (int i = 0; i < kMaxStr; i++)
	{
		// cout << int(str1[i]) << " " << int(str2[i]) << endl;

		if (str1[i] != str2[i])
		{
			return false;
		}

		// 문자열 종료 조건
		if (str1[i] == '\0')
		{
			return true;
		}
	}

	return true;
}

int main() 
{
	// 영어 사용이 디버깅에 유리하다.
	const char str1[kMaxStr] = "stop";
	
	while (1)
	{
		char str2[kMaxStr];
		cin >> str2;

		if (IsEqual(str1, str2))
		{
			cout << "종료합니다." << endl;
			break;
		}
		else
		{
			cout << "계속합니다." << endl;
		}
	}

	return 0;
}

