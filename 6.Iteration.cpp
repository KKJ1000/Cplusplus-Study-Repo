#include <iostream>
using namespace std;

int main() 
{
	// for 기본 예제
	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	
	// 배열 데이터 출력
	// 증가하다가 감소할 때 멈추도록
	int my_array[] = { 1,2,3,4,5,4,3,2,1 };
	for (int i = 0; i < sizeof(my_array) / sizeof(int); i++)
	{
		cout << my_array[i] << " ";
		if (my_array[i] == 5)
		{
			break;
		}
	}
	cout << endl;

	// 문자열 출력
	//1.
	char my_string[] = "Hello\0, World!";
	for (int i = 0; sizeof(my_string); i++)
	{
		if (my_string[i] == '\0')
		{
			break;
		}
		cout << my_string[i] << " ";
	}
	

	//2.
	//char my_string[] = "Hello\0, World!";
	//for (int i = 0; my_string[i] != '\0'; i++)
	//{
	//	cout << my_string[i] << " ";
	//}

	//int i = 0;
	//while (i < 10)
	//{
	//	cout << i << " ";
	//	i++; //무한 반복이 되지 않도록 i 증가
	//}
	//cout << endl;

	
	int i = 0;
	while (true)
	{
		cout << i << " ";
		i++;

		if (i == 10)
		{
			break;
		}
	}

	// 문제 > 내가 푼 방법
	char my_string[] = "Hello\0, World!";
	int i = 0;
	//while(true)
	//{
	//	cout << my_string[i] << " ";
	//	i++;
	//	if (my_string[i] == '\0')
	//		break;
	//}
	
	// 다른 사람이 푼 방법
	while (i < sizeof(my_string) && my_string[i] != '\0')
	{
		cout << my_string[i];

		i++;
	}
	cout << endl;
	return 0;
}