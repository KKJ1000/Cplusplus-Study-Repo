#include <iostream>
using namespace std;

int main() 
{
	// cin�� �����͸� �־� ������ ��Ʈ��
	// �� �����͸� �ؼ��ϴ� ���� �ڷ���
	// �ڷ����� ���� �˾Ƽ� ó�����ֱ� ������ scanf()���� ���ϴ�.
	
	// << : insertion operator, >> : extraction operator

	char user_input[100]; // �Է� �޾ƿ°��� ������ �迭

	// cin�� getline�� ����
	cout << "���ϴ� ������ �Է����ּ���." << endl;
	cout << "�Է�: ";

	// cin >> user_input;
	// cin�� ����Ͽ� �Է� ���� �� ���� Ȥ�� �ٹٲ��� ���� ��� �� ������ �Է� ���̴� ���븸 �����ϰ� �ǰ�
	// ���̻� �Է��� �޾ƿ��� �ʴ´�.

	// ����� ��� ���� ��ü ������ �� �Է� �ް� �ʹٸ� getline ���
	// ù��°���� �Է��� �޾ƿ� ���ڿ� �迭�� �̸��� �ι�°���� �ִ�� �޾ƿ� ũ�⸦ ���´�.
	// �Է��� �޾ƿ� ������ �ϻ� ���� �迭���� ���� �� �� �ִ�.
	// cin.getline(user_input, sizeof(user_input));


	//cout << "�޾Ƹ�: " << user_input << endl;

	int number = -1;
	
	cin >> user_input;
	//cin.getline(user_input, sizeof(user_input));
	cin.ignore(100, '\n'); // �ִ� 100���ڱ��� �Է� �޾Ƽ� �����ϰڴ�. �Ǵ� '\n'�� ������ �׶����� �����ϰڴ�.
	// cin.ignore(numeric_limits<streamsize>::max(), '\n')
	
	cin >> number;

	cout << user_input << " " << number << endl;

	return 0;
}