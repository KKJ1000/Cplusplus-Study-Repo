#include <iostream>
using namespace std;

int main() 
{
	// ������ ������ �� �ڷ����� �̸� �����ؾ� �Ѵ�.
	
	// ���������� �޸𸮸� �̹� ������ �ִ�.
	int i;   // ���� ����
	i = 123; // ������ �� ����

	// sizeof
	cout << i << " " << sizeof(i) << endl; 
	// 123 4
	cout << sizeof(int) << endl;
	// 4
	cout << 123 + 4 << " " << sizeof(123 + 4) << endl;
	// 127 4


	float f = 123.456f; // �������� f ���̱�!
	double d = 123.456; // f ���ʿ�!
	cout << f << " " << sizeof(f) << endl; // 123.456 4
	cout << d << " " << sizeof(d) << endl; // 123.456 8

	// C++�� ���ڿ� ���ڿ��� ����
	char c = 'a';
	char str[] = "Hello, World!";  // std::string

	cout << c << " " << sizeof(c) << endl; // a 1

	// ����ȯ
	i = 987.654; // double���� int�� ������ ����
	cout << "int from double" << i << endl; // 987 => �Ҽ��� �� ����

	f = 567.89; // float�� double���� ������ ����

	// �⺻ ������
	// i = 987;
	i += 100; // i = i + 100; // 1087
	i++; // 1087++;
	cout << i << endl; // 1088

	// �Ҹ���
	bool is_good = true;
	is_good = false;

	cout << is_good << endl; // 0 => false

	//boolalpha�� ���ڷ� true �Ǵ� false�� ��µǰ� �Ϸ��� boolalpha
	cout << boolalpha << true << endl;   // true
	cout << is_good << endl;             // false;
	cout << noboolalpha << true << endl; // 1

	// �� ����
	cout << boolalpha;
	cout << (true && true) << endl;
	cout << (true || false) << endl;

	// ��
	cout << (1 > 3) << endl;
	cout << (3 == 3) << endl;
	cout << (i >= 3) << endl;
	cout << ('a' != 'c') << endl;
	cout << ('a' != 'a') << endl;

	// ���� (scope)

	i = 123; // �� ���� ����

	{
		int i = 345;  // <- �� ���� ������ �ٸ� ���� i 
		cout << i << endl; // 345 ���
	}

	cout << i << endl; // 123 ���

	return 0;
}