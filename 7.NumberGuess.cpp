#include <iostream>
#include <random>
using namespace std;

// ���� ���߱� ����

int main() 
{
	// (C++)���� ���� ���
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib(1, 99); // [1, 99]

	//[1, 99]  // 99����
	//[1, 49]  // 49����
	//[25, 49] // 24����
	//[37, 49]
	//[43, 49]
	//[46, 49]

	int number = distrib(gen);

	while (1) //true ��� 1�� ����Ѵ�.
	{
		int guess;
		cout << "���� �Է�: ";
		cin >> guess;
		if (guess > number)
		{
			cout << "�Է��� ���ڰ� Ů�ϴ�." << endl;
		}
		else if (guess < number)
		{
			cout << "�Է��� ���ڰ� �۽��ϴ�." << endl;
		}
		else
		{
			cout << "�����Դϴ�.!" << endl;
			break;
		}
	}

	return 0;
}