#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    int i = 0, c = 0;
    int num;
    int binary[32] = {};
    char O[8] = { '0','1','2','3','4','5','6','7' };
    char H[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' }; //16����

    cout << "������ �Է��ϼ���: ";
    cin >> num; //���� �Է� �ޱ�

    if (num < INT_MAX && num > INT_MIN) {
        if (num >= 0) { //�Է¹��� ������ ����� ��          >> 2���� ��� �� 8, 16���� ���
            for (i = 0; i < 32; i++) { //2����
                binary[i] = num % 2; //2���� �� �迭�� ����
                num = num / 2;
                c++;
            }
            cout << "2����: "; //2���� �迭 ���
            for (int i = c - 1; i > -1; i--) { cout << binary[i]; }
            cout << endl;

            string array; //2���� �迭�� string���� ��ȯ (8����, 16���� ����� ����)
            for (int i = c - 1; i > -1; i--) {
                array += to_string(binary[i]);
            }

            cout << "8����: "; //8����: 2������ ���ڸ��� ������ ���
            if (array.size() % 3 == 1) { cout << array[0]; }
            if (array.size() % 3 == 2) { cout << (array[0] - '0') * 2 + (array[1] - '0'); }
            for (int i = array.size() % 3; i < array.size(); i += 3) { cout << (array[i] - '0') * 4 + (array[i + 1] - '0') * 2 + (array[i + 2] - '0'); }
            cout << endl;

            cout << "16����: "; //16����: 2������ ���ڸ��� ������ ���
            for (int i = array.size() % 4; i < array.size(); i += 4) { cout << H[(array[i] - '0') * 8 + (array[i + 1] - '0') * 4 + (array[i + 2] - '0') * 2 + (array[i + 3] - '0')]; }
        }//10 = A, ..., 15 = F �̹Ƿ� �迭 ����� H �迭�� ���α�

        else { //�Է¹��� ������ ������ �� >>          2�� �������� ����Ͽ� 2���� ��� �� 8, 16���� ���
            num = num * (-1); //���� ��ȣ ����
            for (int i = 0; i < 32; i++) { //2������ ����
                binary[i] = num % 2;
                num = num / 2;
                c++;
            }
            for (int i = 0; i < 32; i++) { //1�� ����ȭ
                if (binary[i] == 1) { binary[i] = 0; }
                else if (binary[i] == 0) { binary[i] = 1; }
            }

            for (int i = c - 1; i > -1; i--) { binary[i]; } //1 ���ϱ�
            for (i = 0; i < 32; i++) {
                if (binary[i] == 1) { binary[i] = 0; }
                else { binary[i] = 1; break; }
            }
            cout << "2����: "; //2���� �迭 ���
            for (int i = c - 1; i > -1; i--) { cout << binary[i]; }
            cout << endl;

            string array; //2���� �迭�� string���� ��ȯ (8����, 16���� ����� ����)
            for (int i = c - 1; i > -1; i--) {
                array += to_string(binary[i]);
            }

            cout << "8����: "; //8����: 2������ ���ڸ��� ������ ���
            if (array.size() % 3 == 1) { cout << array[0]; }
            if (array.size() % 3 == 2) { cout << (array[0] - '0') * 2 + (array[1] - '0'); }
            for (int i = array.size() % 3; i < array.size(); i += 3) { cout << O[(array[i] - '0') * 4 + (array[i + 1] - '0') * 2 + (array[i + 2] - '0')]; }
            cout << endl;

            cout << "16����: "; //16����: 2������ ���ڸ��� ������ ���
            for (int i = array.size() % 4; i < array.size(); i += 4) { cout << H[(array[i] - '0') * 8 + (array[i + 1] - '0') * 4 + (array[i + 2] - '0') * 2 + (array[i + 3] - '0')]; }
        } //10 = A, ..., 15 = F �̹Ƿ� �迭 ����� H �迭�� ���α�
    }
    else {
        cout << "���α׷� ����" << endl;
    }
}