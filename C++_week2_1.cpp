#include <iostream>
using namespace std;

int main()
{
	int num;
	int count;
	int i, j;
	int multiple;

	srand(time(NULL));
	num = rand() % 101;

	cout << "랜덤한 수: " << num << endl;

	cout << "특정배수 개수: ";
	cin >> count;
	cout << endl;

	cout << "<특정배수만 출력하는 프로그램>" << endl;

	for (i = 1; i < 4; i++)
	{
		cout << i << "번째 특정 배수: ";
		cin >> multiple;
		cout << "<특정배수만 출력하는 프로그램>" << endl;
		for (j = 1; j <= num; j++)
		{
			if (j % multiple != 0)
				continue;
			cout << j << ", ";
		}
		cout << endl;

		cout << "<특정배수 제외 출력하는 프로그램>" << endl;
		for (j = 1; j <= num; j++)
		{
			if (j % multiple == 0)
				continue;
			cout << j << ", ";
		}
		cout << endl;
	}
}