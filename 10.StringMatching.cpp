#include <iostream>
using namespace std;

// ���ڿ� �� ���� �ڵ�

const int kMaxStr = 100; // ���� ����

// ��� ���ڿ� �迭�� ���̰� �����ϴٰ� ����
bool IsEqual(const char* str1, const char* str2)
{
	for (int i = 0; i < kMaxStr; i++)
	{
		// cout << int(str1[i]) << " " << int(str2[i]) << endl;

		if (str1[i] != str2[i])
		{
			return false;
		}

		// ���ڿ� ���� ����
		if (str1[i] == '\0')
		{
			return true;
		}
	}

	return true;
}

int main() 
{
	// ���� ����� ����뿡 �����ϴ�.
	const char str1[kMaxStr] = "stop";
	
	while (1)
	{
		char str2[kMaxStr];
		cin >> str2;

		if (IsEqual(str1, str2))
		{
			cout << "�����մϴ�." << endl;
			break;
		}
		else
		{
			cout << "����մϴ�." << endl;
		}
	}

	return 0;
}

