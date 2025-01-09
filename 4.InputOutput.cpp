#include <iostream>
using namespace std;

int main() 
{
	// cin은 데이터를 넣어 보내는 스트림
	// 그 데이터를 해석하는 것은 자료형
	// 자료형에 따라서 알아서 처리해주기 때문에 scanf()보다 편리하다.
	
	// << : insertion operator, >> : extraction operator

	char user_input[100]; // 입력 받아온것을 저장할 배열

	// cin과 getline의 차이
	cout << "원하는 문장을 입력해주세요." << endl;
	cout << "입력: ";

	// cin >> user_input;
	// cin을 사용하여 입력 받을 때 공백 혹은 줄바꿈이 있을 경우 그 전까지 입력 중이던 내용만 저장하게 되고
	// 더이상 입력을 받아오지 않는다.

	// 공백과 상관 없이 전체 내용을 다 입력 받고 싶다면 getline 사용
	// 첫번째에는 입력을 받아올 문자열 배열의 이름을 두번째에는 최대로 받아올 크기를 적는다.
	// 입력을 받아온 내용을 하상 문자 배열에만 저장 할 수 있다.
	// cin.getline(user_input, sizeof(user_input));


	//cout << "메아리: " << user_input << endl;

	int number = -1;
	
	cin >> user_input;
	//cin.getline(user_input, sizeof(user_input));
	cin.ignore(100, '\n'); // 최대 100글자까지 입력 받아서 무시하겠다. 또는 '\n'이 있으면 그때부터 무시하겠다.
	// cin.ignore(numeric_limits<streamsize>::max(), '\n')
	
	cin >> number;

	cout << user_input << " " << number << endl;

	return 0;
}