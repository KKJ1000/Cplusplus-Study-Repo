#include <iostream>
using namespace std;

int main() 
{
	int a = 1;
	int b = 2;
	int c = 3;

	// ���� �ڷ����� �����͸� �����ϱ� ���� �޸𸮸� �̸� ��Ƴ���
	int my_array[3] = { 1, 2, 3 }; // �ʱ�ȭ �� ���� {} �ȿ� �� ����

	// �ε��� (zero-based)
	cout << my_array[0] << " " << my_array[1] << " " << my_array[2] << endl;

	// �ε������� �ϳ� ¥�� ���� ó�� ��� ����
	my_array[1] = 5;

	cout << my_array[0] << " " << my_array[1] << " " << my_array[2] << endl;

	//�ε��� ������ ����� ���� �߻�
	//cout << my_array[1000] << endl;

	// ���ڿ��� �⺻������ ���ڿ� �迭
	char name[14] = "Hello, World!"; // ����''�� ���ڿ�"" ����!
	// Hello, World!�� 13���������� ���� Null Character '\0'�� �Ⱥ������� �����ϱ� ������ [14]�̴�.
	cout << name << " " << sizeof(name) << endl;

	name[0] = 'A';
	name[1] = 'B';
	name[2] = 'C';

	cout << name << endl;

	name[2] = '\0'; //�� ĳ���ͷ� �ٲٸ� �ڿ��� ����� ���� �ʴ´�.

	cout << name << endl;

	return 0;
}