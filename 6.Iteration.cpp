#include <iostream>
using namespace std;

int main() 
{
	// for �⺻ ����
	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	
	// �迭 ������ ���
	// �����ϴٰ� ������ �� ���ߵ���
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

	// ���ڿ� ���
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
	//	i++; //���� �ݺ��� ���� �ʵ��� i ����
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

	// ���� > ���� Ǭ ���
	char my_string[] = "Hello\0, World!";
	int i = 0;
	//while(true)
	//{
	//	cout << my_string[i] << " ";
	//	i++;
	//	if (my_string[i] == '\0')
	//		break;
	//}
	
	// �ٸ� ����� Ǭ ���
	while (i < sizeof(my_string) && my_string[i] != '\0')
	{
		cout << my_string[i];

		i++;
	}
	cout << endl;
	return 0;
}