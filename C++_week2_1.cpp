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

	cout << "������ ��: " << num << endl;

	cout << "Ư����� ����: ";
	cin >> count;
	cout << endl;

	cout << "<Ư������� ����ϴ� ���α׷�>" << endl;

	for (i = 1; i < 4; i++)
	{
		cout << i << "��° Ư�� ���: ";
		cin >> multiple;
		cout << "<Ư������� ����ϴ� ���α׷�>" << endl;
		for (j = 1; j <= num; j++)
		{
			if (j % multiple != 0)
				continue;
			cout << j << ", ";
		}
		cout << endl;

		cout << "<Ư����� ���� ����ϴ� ���α׷�>" << endl;
		for (j = 1; j <= num; j++)
		{
			if (j % multiple == 0)
				continue;
			cout << j << ", ";
		}
		cout << endl;
	}
}