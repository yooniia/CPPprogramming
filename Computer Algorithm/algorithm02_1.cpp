#include<iostream>
using namespace std;

int main() {
    int A[5][5] = { }; //5*5 ũ���� 2���� �迭 A
    int N = 1; //�迭�� ä�� ���� ����
    int k = 0; //Ƚ�� ī��Ʈ ����
    int i, j; //�ݺ� ����

    while (1) { //���ѹݺ���
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                if (i + j == k) { //i�� j�� ���� ���� k�� ������ ��쿡 �迭�� ä��
                    A[j][i] = N;
                    N += 1;
                }
            }
        }
        k += 1;
        if (N > 25) break; //25���� Ŀ���� break
    }

    for (i = 0; i < 5; i++) { //�迭 ���
        for (j = 0; j < 5; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}