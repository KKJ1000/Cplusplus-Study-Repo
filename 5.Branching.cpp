#include <iostream>
using namespace std;

int main() 
{
	// 프로그램의 분기
	int number;

	cin >> number;

	if (number % 2 == 0)
	{
		cout << "짝수입니다." << endl;
	}
	else
	{
		cout << "홀수입니다." << endl;
	}

	// 조건 연산자 (삼항 연산자)
	cout << (number % 2 == 0 ? "짝수입니다." : "홀수입니다.") << endl;

	// switch - case

	switch (number)
	{
	case 0:
		cout << "정수 0입니다." << endl;
		break;
	case 1:
		cout << "정수 1입니다." << endl;
		break;
	default:
		cout << "그 외 숫자입니다." << endl;
		break;
	}

	return 0;
}