#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class GameCharacter { //Ŭ���� ����
	char* name;
	int age;
	char* job;
public:
	GameCharacter(const char*name, int age, const char*job) { //������
		int len1 = strlen(name);
		this->name = new char[len1 + 1];
		strcpy(this->name, name);

		this->age = age;

		int len2 = strlen(job);
		this->job = new char[len2 + 1];
		strcpy(this->job, job);
	}
	GameCharacter(const GameCharacter& gamecharacter) { //���������
		this->name = gamecharacter.name;
		int len1 = strlen(gamecharacter.name);
		this->name = new char[len1 + 1];
		strcpy(this->name, gamecharacter.name);

		this->age = gamecharacter.age;

		this->job = gamecharacter.job;
		int len2 = strlen(gamecharacter.job);
		this->job = new char[len2 + 1];
		strcpy(this->job, gamecharacter.job);
	}
	~GameCharacter() { //�Ҹ���
		delete[]name;
		delete[]job;
	}
	void showinfo() {
		cout << "****** ĳ���� ���� ******" << endl;
		cout << "ĳ���� �̸�: " << name << endl;
		cout << "ĳ���� ����: " << age << endl;
		cout << "ĳ���� ����: " << job << endl << endl;
	}
};

int main() {
	int num, num2;
	char name[30], name2[30];
	int age = NULL, age2;
	char job[30], job2[30];

	while (1) {
		GameCharacter character1(name, age, job);
		GameCharacter character2(character1);

		string menu[5] = { "ĳ���� ����", "ĳ���� ����", "ĳ���� ���� Ȯ��", "ĳ���� ���� ����", "����" };
		cout << "======== ĳ���� ���� ========" << endl;
		for (int i = 0; i < 5; i++)
			cout << i + 1 << ". " << menu[i] << endl;

		cout << "��ȣ�� �������ּ���: ";
		cin >> num;
		cout << endl;

		if (num == 1) {
			cout << "������ ĳ������ �̸�, ����, ������ ������� �Է����ּ���.(�������� ����)" << endl;
			cout << "�������: ������ ������ �����Ӱ�!" << endl;
			cout << "--> ";
			cin >> name >> age >> job;
			cout << "ĳ���Ͱ� �����Ǿ����ϴ�." << endl << endl;
		}
		if (num == 2) {
			cout << "ĳ���Ͱ� ����Ǿ����ϴ�." << endl << endl;
		}
		if (num == 3) {
			character1.showinfo();
			character2.showinfo();
		}
		if (num == 4) {
			cout << "�����ϰ� ���� ĳ���͸� �����ϼ���.(1 or 2): ";
			cin >> num2;

			if (num2 == 1) {
				cout << "�����ϰ� ���� �̸�, ����, ������ �Է����ּ���." << endl;
				cout << "--> ";
				cin >> name2 >> age2 >> job2;
				strcpy(name, name2);
				age = age2;
				strcpy(job, job2);
				cout << "���������� �����Ǿ����ϴ�." << endl << endl;
			}
			else if (num2 == 2) {
				cout << "�����ϰ� ���� �̸�, ����, ������ �Է����ּ���." << endl;
				cout << "--> ";
				cin >> name >> age >> job;
				strcpy(name, name2);
				age = age2;
				strcpy(job, job2);
				cout << "���������� �����Ǿ����ϴ�." << endl << endl;
			}
		}
		if (num == 5) {
			cout << "����Ǿ����ϴ�." << endl;
			break;
		}
	}
	return 0;
}