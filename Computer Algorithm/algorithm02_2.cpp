#include <iostream>
using namespace std;

int main() {
	int B[5][5] = { }; //5*5 ũ���� 2���� �迭 B
	int N = 1; //�迭�� ä�� ���� ����
	//�迭�� ��Ģ�� �����ϱ� ���� / ������� �밢���� �׾��� �� ����� ���� �ﰢ���� �Ʒ��� �ﰢ������ �����Ͽ� �ݺ��� ����

	for (int i = 0; i < 5; i++) { //���� �ﰢ��
		int K = 0;
		if (i % 2 != 0) { //Ȧ��
			for (int j = 0; j < i + 1; j++) {
				B[i - K][K] = N;
				N += 1;
				K += 1;
			}
		}
		else { //¦��
			for (int j = 0; j < i + 1; j++) {
				B[K][i - K] = N;
				N += 1;
				K += 1;
			}
		}
	}
	for (int i = 1; i < 5; i++) { //�Ʒ��� �ﰢ��
		int K = 0;
		if ((i + 4) % 2 != 0) { //Ȧ��
			for (int j = i; j < 5; j++) {
				B[4 - K][i + K] = N;
				N += 1;
				K += 1;
			}
		}
		else {
			for (int j = i; j < 5; j++) { //¦��
				B[i + K][4 - K] = N;
				N += 1;
				K += 1;
			}
		}
	}
	for (int i = 0; i < 5; i++) {  //�迭 ���
		for (int j = 0; j < 5; j++) {
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}
}