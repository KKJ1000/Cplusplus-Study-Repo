#include <iostream>
#include <cstring>
using namespace std;

// public, private 접근제한자
class MyClass
{
public:
	MyClass()
	{
		// 호출 시점 확인
		cout << "MyClass()" << endl;
		cout << "this " << this << endl;
	}

	MyClass(int number) // 생성자를 만들 때 매개변수를 다르게 만들 수 있다.
	{
		cout << "MyClass(int number)" << endl;

		// this pointer (this : 인스턴스의 주소값)
		this->number_ = number;
		cout << "this " << this << endl;
	}

	~MyClass()
	{
		// 호출 시점 확인
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

	// 클래스로 배열 사용 가능
	// 구조체처럼 클래스의 포인터 사용 가능


	return 0;
}

