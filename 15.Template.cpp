#include <iostream>
using namespace std;

class MyInt
{
public:
	int data_;
};

class MyDouble
{
public:
	double data_;
};

// ���ø�
template <typename T>
class MyClass
{
public:
public:
	T data_;
};

int main()
{
	MyClass<int> my_int;
	MyClass<double> my_double;

	my_int.data_;
	my_double.data_;
	cout << sizeof(my_int) << " " << sizeof(my_double) << endl;
	return 0;
}

