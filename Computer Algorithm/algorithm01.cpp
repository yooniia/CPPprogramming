#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    int i = 0, c = 0;
    int num;
    int binary[32] = {};
    char O[8] = { '0','1','2','3','4','5','6','7' };
    char H[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' }; //16진수

    cout << "정수를 입력하세요: ";
    cin >> num; //정수 입력 받기

    if (num < INT_MAX && num > INT_MIN) {
        if (num >= 0) { //입력받은 정수가 양수일 때          >> 2진수 출력 후 8, 16진수 계산
            for (i = 0; i < 32; i++) { //2진수
                binary[i] = num % 2; //2진수 값 배열에 저장
                num = num / 2;
                c++;
            }
            cout << "2진수: "; //2진수 배열 출력
            for (int i = c - 1; i > -1; i--) { cout << binary[i]; }
            cout << endl;

            string array; //2진수 배열을 string으로 변환 (8진수, 16진수 계산을 위해)
            for (int i = c - 1; i > -1; i--) {
                array += to_string(binary[i]);
            }

            cout << "8진수: "; //8진수: 2진수를 세자리씩 나누어 계산
            if (array.size() % 3 == 1) { cout << array[0]; }
            if (array.size() % 3 == 2) { cout << (array[0] - '0') * 2 + (array[1] - '0'); }
            for (int i = array.size() % 3; i < array.size(); i += 3) { cout << (array[i] - '0') * 4 + (array[i + 1] - '0') * 2 + (array[i + 2] - '0'); }
            cout << endl;

            cout << "16진수: "; //16진수: 2진수를 네자리씩 나누어 계산
            for (int i = array.size() % 4; i < array.size(); i += 4) { cout << H[(array[i] - '0') * 8 + (array[i + 1] - '0') * 4 + (array[i + 2] - '0') * 2 + (array[i + 3] - '0')]; }
        }//10 = A, ..., 15 = F 이므로 배열 출력을 H 배열로 감싸기

        else { //입력받은 정수가 음수일 때 >>          2의 보수법을 사용하여 2진수 출력 후 8, 16진수 계산
            num = num * (-1); //음수 부호 생략
            for (int i = 0; i < 32; i++) { //2진수로 변형
                binary[i] = num % 2;
                num = num / 2;
                c++;
            }
            for (int i = 0; i < 32; i++) { //1의 보수화
                if (binary[i] == 1) { binary[i] = 0; }
                else if (binary[i] == 0) { binary[i] = 1; }
            }

            for (int i = c - 1; i > -1; i--) { binary[i]; } //1 더하기
            for (i = 0; i < 32; i++) {
                if (binary[i] == 1) { binary[i] = 0; }
                else { binary[i] = 1; break; }
            }
            cout << "2진수: "; //2진수 배열 출력
            for (int i = c - 1; i > -1; i--) { cout << binary[i]; }
            cout << endl;

            string array; //2진수 배열을 string으로 변환 (8진수, 16진수 계산을 위해)
            for (int i = c - 1; i > -1; i--) {
                array += to_string(binary[i]);
            }

            cout << "8진수: "; //8진수: 2진수를 세자리씩 나누어 계산
            if (array.size() % 3 == 1) { cout << array[0]; }
            if (array.size() % 3 == 2) { cout << (array[0] - '0') * 2 + (array[1] - '0'); }
            for (int i = array.size() % 3; i < array.size(); i += 3) { cout << O[(array[i] - '0') * 4 + (array[i + 1] - '0') * 2 + (array[i + 2] - '0')]; }
            cout << endl;

            cout << "16진수: "; //16진수: 2진수를 네자리씩 나누어 계산
            for (int i = array.size() % 4; i < array.size(); i += 4) { cout << H[(array[i] - '0') * 8 + (array[i + 1] - '0') * 4 + (array[i + 2] - '0') * 2 + (array[i + 3] - '0')]; }
        } //10 = A, ..., 15 = F 이므로 배열 출력을 H 배열로 감싸기
    }
    else {
        cout << "프로그램 종료" << endl;
    }
}