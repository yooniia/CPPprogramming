#include <iostream> //헤더 파일
using namespace std; //std 이름 공간에 선언된 이름에 std:: 생략

int main() //프로그램 시작점
{
	int res, line, number, i, j; //예약 선택 변수, 좌석의 열 및 행 변수, 배열 생성 시 필요한 변수 선언
	int seats[3][10] = { 0 }; //3열 10행의 배열 생성, 모든 항목은 0

	while (1) //무한 루프문 생성
	{
		cout << "좌석 예약하시겠습니까?(0이나 1선택) "; //좌석 예약을 위한 질문 출력
		cin >> res; //res 변수에 값을 삽입할 수 있도록 cin 사용(cout 출력문 뒤에 값 입력 가능)
		cout << endl;

		if (res == 0) //0을 입력했을 경우
		{
			cout << "좌석 예약 종료" << endl; //좌석 예약 종료 문구 출력
			break; //반복문 종료
		}
			
		while (res == 1) //1을 입력했을 경우
		{
			cout << "1 2 3 4 5 6 7 8 9 10" << endl; //좌석 예약 프로그램 시작
			cout << "-------------------------------" << endl;

			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 10; j++)
				{
					cout << seats[i][j] << " ";
				}
				cout << endl; //for문을 이용하여 배열 출력
			}
			cout << "\n";
			cout << "몇 열, 몇 행 좌석을 예약하시겠습니까? "; //좌석 지정을 위한 질문 출력
			cin >> line; //line 변수에 값을 삽입하도록 함 (열 지정)
			cin >> number; //number 변수에 값을 삽입하도록 함 (행 지정)

			if (seats[line - 1][number - 1] == 0) //지정한 좌석 위치가 0으로 출력되어 있을 경우
			{
				seats[line - 1][number - 1] = { 1 }; //지정 좌석을 0에서 1로 변경하게끔 배열 수정
				cout << "예약되었습니다.\n\n"; //예약되었습니다 문구 출력
				cout << "1 2 3 4 5 6 7 8 9 10" << endl; //좌석 예약 프로그램 시작
				cout << "-------------------------------" << endl;

				for (i = 0; i < 3; i++)
				{
					for (j = 0; j < 10; j++)
					{
						cout << seats[i][j] << " ";
					}
					cout << endl; //for문을 이용하여 배열 출력
				}
				break;
			}
			else if (seats[line - 1][number - 1] == 1) //지정한 좌석 위치가 1로 출력되어 있을 경우
			{
				cout << "이미 예약된 자리입니다.\n\n"; //이미 예약된 자리입니다 문구 출력
				break; //반복문 종료 후 좌석 예약을 위한 질문 출력으로 돌아감
			}
		}
	}
	return 0;
}