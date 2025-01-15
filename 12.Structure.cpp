#include <iostream>
#include <cstring>
using namespace std;

struct MyStruct // MyStruct��� �ڷ����� ���� �Ͱ� ����ϴ�.
{
	int first;
	int second;
	
	int Sum()
	{
		return first + second;
	}
};

int main() 
{
	// member(.) operator
	MyStruct a;
	a.first = 123;
	a.second = 456;

	cout << sizeof(a) << endl;

	cout << a.Sum() << endl;

	// �����ʹ� member(->) operator�� ȭ��ǥ�̴�.
	MyStruct* ptr_a = &a;

	ptr_a->first = -6;

	cout << a.first << " " << a.second << " " << a.Sum() << endl;

	cout << ptr_a->first << " " << ptr_a->second << " " << ptr_a->Sum() << endl;

	// ����ü �迭�� ����
	MyStruct pairs[10];

	for (int i = 0; i < 10; i++)
	{
		pairs[i].first = i;
		pairs[i].second = i * 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << pairs[i].Sum() << endl;
	}

	return 0;
}
