#include <iostream>
using namespace std;

int main() {
	int B[5][5] = { }; //5*5 크기의 2차원 배열 B
	int N = 1; //배열을 채울 숫자 변수
	//배열의 규칙을 구분하기 위해 / 모양으로 대각선을 그었을 때 생기는 위쪽 삼각형과 아래쪽 삼각형으로 구분하여 반복문 실행

	for (int i = 0; i < 5; i++) { //위쪽 삼각형
		int K = 0;
		if (i % 2 != 0) { //홀수
			for (int j = 0; j < i + 1; j++) {
				B[i - K][K] = N;
				N += 1;
				K += 1;
			}
		}
		else { //짝수
			for (int j = 0; j < i + 1; j++) {
				B[K][i - K] = N;
				N += 1;
				K += 1;
			}
		}
	}
	for (int i = 1; i < 5; i++) { //아래쪽 삼각형
		int K = 0;
		if ((i + 4) % 2 != 0) { //홀수
			for (int j = i; j < 5; j++) {
				B[4 - K][i + K] = N;
				N += 1;
				K += 1;
			}
		}
		else {
			for (int j = i; j < 5; j++) { //짝수
				B[i + K][4 - K] = N;
				N += 1;
				K += 1;
			}
		}
	}
	for (int i = 0; i < 5; i++) {  //배열 출력
		for (int j = 0; j < 5; j++) {
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}
}