#include <iostream>
#include <random>
using namespace std;

// 숫자 맞추기 게임

int main() 
{
	// (C++)난수 생성 방법
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib(1, 99); // [1, 99]

	//[1, 99]  // 99가지
	//[1, 49]  // 49가지
	//[25, 49] // 24가지
	//[37, 49]
	//[43, 49]
	//[46, 49]

	int number = distrib(gen);

	while (1) //true 대신 1도 사용한다.
	{
		int guess;
		cout << "숫자 입력: ";
		cin >> guess;
		if (guess > number)
		{
			cout << "입력한 숫자가 큽니다." << endl;
		}
		else if (guess < number)
		{
			cout << "입력한 숫자가 작습니다." << endl;
		}
		else
		{
			cout << "정답입니다.!" << endl;
			break;
		}
	}

	return 0;
}