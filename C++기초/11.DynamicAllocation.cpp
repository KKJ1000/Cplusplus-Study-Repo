#include <iostream>
#include <cstring>
using namespace std;

const int kMaxStr = 100; // ���� ���

int Min(int a, int b)
{
	return a < b ? a : b; // ���� ������
}

int main() 
{
	// ���ڿ� ����
	char str1[] = "Hello, World!";
	char str2[kMaxStr];
	// str2 = str1; Error

	// dest, src           // sizeof(�迭�̸�)�� �迭�� ����ϴ� �޸� ��ü ũ��
	memcpy(str2, str1, Min(sizeof(str1), sizeof(str2)));
	cout << str2 << endl; // Hello, World!

	char* dynamic_array = new char[kMaxStr];
	// ���� : �����Ҵ� �޸𸮴� ���� ����� ������ �������̴�.(�迭�� �ƴϴ�)
	memcpy(dynamic_array, str1, Min(sizeof(str1), kMaxStr));
	cout << dynamic_array << endl;

	cout << str1 << " " << str2 << " " << dynamic_array << endl;
	cout << size_t(str1) << " " << size_t(str2) << " " << size_t(dynamic_array) << endl; 
	// 10������ �ٲٸ� dynamic_array �ּҸ� ���ڰ� ���� �ٸ���. �̴� ���� �迭�� ���ÿ� �ְ� ���� �迭�� ���� �ֱ� ������ �ּҰ������� ���̰� ���̳���.

	delete[] dynamic_array; // �迭 ������ [] / ���α׷��� ���������� �����Ҵ� ���� �޸𸮸� ������������Ѵ�.

	// ���� �����Ҵ� ���� �޸𸮸� �������� �ʰ� ������ ���Ҵ� �Ұ�� ���� �����Ҵ� ���� �޸𸮸� �Ҿ������.
	// dynamic_array = new char[���ϴ� ũ��]; �׷��� ���� �ִ����� ����� ���� �ٽ� �����Ҵ��� �޾ƾ� �Ѵ�.
	// delete[] dynamic_array; �׸��� ���� �Ҵ� ���� �޸𸮵� �� ����ϸ� ������ �Ѵ�.

	return 0;
}

