#include<iostream>
using namespace std;

int main() {
    int A[5][5] = { }; //5*5 크기의 2차원 배열 A
    int N = 1; //배열을 채울 숫자 변수
    int k = 0; //횟수 카운트 변수
    int i, j; //반복 변수

    while (1) { //무한반복문
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                if (i + j == k) { //i와 j를 더한 값이 k와 같아질 경우에 배열을 채움
                    A[j][i] = N;
                    N += 1;
                }
            }
        }
        k += 1;
        if (N > 25) break; //25보다 커지면 break
    }

    for (i = 0; i < 5; i++) { //배열 출력
        for (j = 0; j < 5; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}