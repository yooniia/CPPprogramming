#include <iostream>
using namespace std;

int main() {
    int C[5][5] = { }; //5*5 크기의 2차원 배열 C
    int N = 0, S = -1, K = 1; //N: 배열을 채울 숫자 변수, S: 배열의 방향 설정을 위한 변수, K: 횟수 카운트 변수
    int a = 2, b = 2; //배열의 행, 열 변수

    while (1) { //무한반복문
        for (int i = 0; i < K; i++) {
            N += 1;
            C[a][b] = N;
            a += S; //행 증가 또는 감소
        }
        S *= -1;
        if (K == 5) break; //K가 5가 되면 반복문 탈출
        for (int i = 0; i < K; i++) { //위에서 탈출하지 못하면 열 증감이 이루어지는 반복문이 이어져 실행됨
            N += 1;
            C[a][b] = N;
            b += S; //열 증가 또는 감소
        }
        K += 1;
    }

    for (int i = 0; i < 5; i++) { //배열 출력
        for (int j = 0; j < 5; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
}