#include <iostream>
using namespace std;

int main() 
{
	int a = 123;

	// address of �ּ� ������ & ampersand(���ۻ���)
	cout << a << " " << &a << endl;

	int* b = &a; // b�� �ּ� ���� // �ּ� ���� ������ ������ *�� ���δ�.
	// deference operator (������ ������)
	cout << b << " " << *b << endl; // *b�� b�� ����Ǿ��ִ� �ּҿ� ����Ǿ��ִ� ���� �����´�.

	*b = 567;

	cout << a << " " << b << " " << *b << endl; 

	// ������ ��ü�� �ּ� ũ��� �ڷ����� ũ�� (�ּ��� ũ��� �׻� ����)
	double* c = 0; // �ƹ� �ּҵ� ����Ű�� ���� �ʴٴ� �ǹ̷� �ʱ�ȭ
	
	cout << sizeof(int) << " " << sizeof(double) << endl; // 4 8
	cout << sizeof(int*) << " " << sizeof(double*) << endl;
	cout << sizeof(b) << " " << sizeof(c) << endl;


	// ������ ����� �迭

	// size_t (�Ʒ������� �ּҸ� 10������ ��ȯ �뵵�� ���)
	cout << sizeof(size_t) << endl; // 8
	cout << size_t(b) << " " << size_t(b + 1) << " " << size_t(b + 2) << endl;
	cout << size_t(c) << " " << size_t(c + 1) << " " << size_t(c + 2) << endl;

	// sizeof(char) == 1
	char* e = 0;
	cout << size_t(e + 15) << endl;
	
	// ���ڿ�, �迭 �����Ű��
	
	int my_array[] = { 23, 38, 56, 69, 72 };
	
	char my_str[] = { 'h', 'e', 'l', 'l', 'o' }; // "Hello"

	char* ptr = my_str; // �迭�� �̸��� ������
	
	cout << *(ptr + 3) << endl;
	cout << ptr[4] << endl; 

	return 0;
}