#include <iostream> // ��ó���⿡ ������ ���ù�, C++ ǥ�� ������� ���� Ŭ������ ��ü ����
using namespace std; // ��� ���Ͽ� ����� �̸��� ����� �� std:: ����

int main() // ���α׷� ���� ������, main �Լ��� ����Ǹ� ���α׷� ����
{
	cout << "����� �̸��� �����Դϱ�? "; // cout: �����͸� �ܼ� ȭ�鿡 ����� �� ����ϴ� ��ɾ�
	char name0[12]; 
	cin.getline(name0, 12, '\n'); // ������ ������ ���ڿ��� �Է¹��� �� ����
	cout << "�ݰ����ϴ�. " << name0 << "��\n\n"; // name0�� 6������ << �ڿ� �Է��� �ǿ����� ���
	
	cout << "----------SWING 30----------\n";
	cout << "������ ���� �Է��� �����մϴ�.\n\n";

	int coke; //int ���� ����
	int water;
	int fanta;
	int coke_num;
	int water_num;
	int fanta_num;
	int x;
	int sum;
	int price;

	x = 500; // ���� x�� ���� �ݾ� ����

	cout << "�ݶ��� ���� : "; // cout ��ɾ ���� ������ ���� ����
	cin >> coke; // cin: Ű����� �������α׷��� �����ϴ� �Է� ��Ʈ�� ��ü, ������ �ǿ����ڿ� ������ ���� ����
	cout << "��ټ��� ���� : ";
	cin >> water;
	cout << "ȯŸ�� ���� : ";
	cin >> fanta;

	cout << "\n������ �Է����ּ���.\n\n";

	cout << "�ݶ� ���� : "; // cout ��ɾ ���� ������ ���� ����
	cin >> coke_num;
	cout << "��ټ� ���� : ";
	cin >> water_num;
	cout << "ȯŸ ���� : ";
	cin >> fanta_num;
	cout << "----------------------------\n";
	
	sum = (coke * coke_num) + (water * water_num) + (fanta * fanta_num); // ��ü �ݾ� ���
	price = sum - x; // ���� �ݾ��� ������ �� �ݾ� ���

	cout << x << "���� ���ι޾� �� " << price << "���Դϴ�.\n";

	return 0; //main() �Լ������� ���������� return �� ���� ����, ���� �� �ڵ����� return 0; ����
}