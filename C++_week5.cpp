#include <iostream>
#include <string>
using namespace std;

class Member { //Ŭ���� ����
	string Name, Id, Password, login_Name, login_Id, login_Password;
	string a, b, c, d;
	int num;
public:
	string getName() { //Name �� ����
		return Name;
	}
	string getId() { //Id �� ����
		return Id;
	}
	string getPassword() { //Password �� ����
		return Password;
	}
	void setName() { //ȸ������ �ÿ� �̸��� �Է� ����
		cout << "�̸�: ";
		cin >> Name;
	}
	void setId() { //ȸ������ �ÿ� Id�� �Է� ����
		cout << "���̵�: ";
		cin >> Id;
	}
	void setPassword() { //ȸ������ �ÿ� Password�� �Է� ����
		cout << "��й�ȣ: ";
		cin >> Password;
	}
	void guestin() { //ȸ������ ���� �Լ�
		setName();
		setId();
		setPassword(); //Name, Id, Password �Է� �Լ� ȣ��
		cout << endl;
		cout << "=== ȸ������ ���� ===" << endl << endl;
	}
	void login() { //�α��� ���� �Լ�
		while (1) { //���� ����
			cout << "���̵�: ";
			cin >> login_Id; //���̵� �Է�
			cout << "��й�ȣ: ";
			cin >> login_Password; //��й�ȣ �Է�

			if (Id != login_Id || Password != login_Password) { //���̵� ��й�ȣ �� �ϳ��� Ʋ�� ���
				cout << "���̵� Ȥ�� ��й�ȣ�� Ʋ�Ƚ��ϴ�." << endl << endl;
			}
			else { //�� �� ������
				cout << "=== �α��� ���� ===" << endl; //����
				cout << endl;
				cout << Name << "�� ȯ���մϴ�." << endl;
				break;
			}
		}
	}
	void start() { //���� �Լ�
		while (1) { //���� ����
			cout << "-------------------- ���￩�ڴ��б� ���������ý��� --------------------" << endl;
			cout << "1. ȸ������" << endl;
			cout << "2. �α���" << endl << endl;
			cout << "��ȣ�� �Է��ϼ��� >> ";
			cin >> num;
			cout << "-----------------------------------------------------------------------" << endl << endl;
			if (num == 1) { //ȸ������ ����
				guestin(); //ȸ������ ���� �Լ� ȣ��
			}
			else if (num == 2) { //�α��� ����
				login(); //�α��� ���� �Լ�
				break; 
			}
			else { //�ٸ� ���� ����
				cout << "1 �Ǵ� 2�� �Է����ּ���" << endl;
			}
		}
	}
};

class Cart { //Ŭ���� ����
	string code;
	string Array;
	int num;
public:
	void print() { //���� ����� �迭�� ����ϴ� �Լ�
		string CartArray[3] = { "c++ ���α׷���", "linux ���α׷���", "������" }; //���� �̸�
		string* p; //������
		p = CartArray;
		string num_CartArray[3] = { "0001", "0002", "0003" }; //���� �м���ȣ
		string* q; //������
		q = num_CartArray;

		cout << "========== ���Ǹ�� ==========" << endl << endl; //���Ǹ�� ���
		for (int i = 0; i < 3; i++) {
			cout << "[" << i + 1 << "] " << p[i] << " >> " << q[i] << endl;
		}
		cout << endl;
	}
	void bag_course() { //���� ��� ��� �Լ�
		cout << "�߰��� �м� ��ȣ >> ";
		cin >> code;
	}
	void put_bag() { //������û Ȯ�� ��� �Լ�
		cout << "======== My ��ٱ��� ========" << endl;
		cout << "1. " << code << endl;
		cout << "2. " << endl;
		cout << "3. " << endl;
	}
	void logout() { //�α׾ƿ� ���� �Լ�
		cout << "---------- �α׾ƿ� ----------" << endl;
		cout << "�α׾ƿ� �Ǿ����ϴ�. �ȳ��� ������." << endl;
	}
};

int main()
{
	int num;
	Member A;
	A.start(); //���� �Լ� ȣ��

	Cart B;
	
	while (1) { //���� ����
		cout << "====================" << endl;
		cout << "1. ��ٱ���" << endl;
		cout << "2. ���� ���" << endl;
		cout << "3. ������û Ȯ��" << endl;
		cout << "4. �α׾ƿ�" << endl << endl;
		cout << "��ȣ�� �Է��ϼ���: ";
		cin >> num;
		cout << endl;

		if (num == 1) { //��ٱ��� ����
			B.print(); //���� ��� �迭 ��� �Լ� ȣ��
		}
		else if (num == 2) { //���� ��� ����
			B.bag_course(); //���� ��� ��� �Լ� ȣ��
		}
		else if (num == 3) { //������û Ȯ�� ����
			B.put_bag(); //������û Ȯ�� ��� �Լ� ȣ��
		}
		else if (num == 4) { //�α׾ƿ� ����
			B.logout(); //�α׾ƿ� ���� �Լ� ȣ��
			break; //����
		}
	}
}