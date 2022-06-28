#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class GameCharacter { //클래스 선언
	char* name;
	int age;
	char* job;
public:
	GameCharacter(const char*name, int age, const char*job) { //생성자
		int len1 = strlen(name);
		this->name = new char[len1 + 1];
		strcpy(this->name, name);

		this->age = age;

		int len2 = strlen(job);
		this->job = new char[len2 + 1];
		strcpy(this->job, job);
	}
	GameCharacter(const GameCharacter& gamecharacter) { //복사생성자
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
	~GameCharacter() { //소멸자
		delete[]name;
		delete[]job;
	}
	void showinfo() {
		cout << "****** 캐릭터 정보 ******" << endl;
		cout << "캐릭터 이름: " << name << endl;
		cout << "캐릭터 나이: " << age << endl;
		cout << "캐릭터 직업: " << job << endl << endl;
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

		string menu[5] = { "캐릭터 생성", "캐릭터 복사", "캐릭터 정보 확인", "캐릭터 정보 수정", "종료" };
		cout << "======== 캐릭터 관리 ========" << endl;
		for (int i = 0; i < 5; i++)
			cout << i + 1 << ". " << menu[i] << endl;

		cout << "번호를 선택해주세요: ";
		cin >> num;
		cout << endl;

		if (num == 1) {
			cout << "생성할 캐릭터의 이름, 나이, 직업을 순서대로 입력해주세요.(공백으로 구분)" << endl;
			cout << "참고사항: 직업의 종류는 자유롭게!" << endl;
			cout << "--> ";
			cin >> name >> age >> job;
			cout << "캐릭터가 생성되었습니다." << endl << endl;
		}
		if (num == 2) {
			cout << "캐릭터가 복사되었습니다." << endl << endl;
		}
		if (num == 3) {
			character1.showinfo();
			character2.showinfo();
		}
		if (num == 4) {
			cout << "수정하고 싶은 캐릭터를 선택하세요.(1 or 2): ";
			cin >> num2;

			if (num2 == 1) {
				cout << "설정하고 싶은 이름, 나이, 직업을 입력해주세요." << endl;
				cout << "--> ";
				cin >> name2 >> age2 >> job2;
				strcpy(name, name2);
				age = age2;
				strcpy(job, job2);
				cout << "정상적으로 수정되었습니다." << endl << endl;
			}
			else if (num2 == 2) {
				cout << "설정하고 싶은 이름, 나이, 직업을 입력해주세요." << endl;
				cout << "--> ";
				cin >> name >> age >> job;
				strcpy(name, name2);
				age = age2;
				strcpy(job, job2);
				cout << "정상적으로 수정되었습니다." << endl << endl;
			}
		}
		if (num == 5) {
			cout << "종료되었습니다." << endl;
			break;
		}
	}
	return 0;
}