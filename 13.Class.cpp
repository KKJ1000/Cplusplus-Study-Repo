#include <iostream>
#include <cstring>
using namespace std;

// public, private ����������
class MyClass
{
public:
	MyClass()
	{
		// ȣ�� ���� Ȯ��
		cout << "MyClass()" << endl;
		cout << "this " << this << endl;
	}

	MyClass(int number) // �����ڸ� ���� �� �Ű������� �ٸ��� ���� �� �ִ�.
	{
		cout << "MyClass(int number)" << endl;

		// this pointer (this : �ν��Ͻ��� �ּҰ�)
		this->number_ = number;
		cout << "this " << this << endl;
	}

	~MyClass()
	{
		// ȣ�� ���� Ȯ��
		cout << "~MyClass()" << endl;
	}

	void Increment(int a)
	{
		number_ += a;
	}

	void Print()
	{
		cout << number_ << endl;
	}

private:
	int number_ = 0;
};

int main() 
{
	MyClass my_class1;
	MyClass my_class2(123);

	cout << &my_class1 << endl;
	cout << &my_class2 << endl;

	my_class1.Print();
	my_class2.Print();

	my_class1.Increment(1);
	my_class1.Print();

	// Ŭ������ �迭 ��� ����
	// ����üó�� Ŭ������ ������ ��� ����


	return 0;
}

