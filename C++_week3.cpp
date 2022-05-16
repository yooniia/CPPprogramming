#include <iostream> //헤더 파일 선언
using namespace std; //std 이름 공간에 선언된 이름에 std:: 생략

string bank_name[4] = { "하나", "우리", "신한", "국민" }; //배열 선언 후 은행 명 저장
int bank[4]; //은행 별 금액을 저장할 배열 선언
int m1 = 5000, m2 = 4000, m3 = 0, m4 = 10; //은행 계좌 별 금액을 출력하기 위한 전역 변수 선언

int total(int* a, int* b, int* c, int* d) //total 함수 (4개의 포인터 변수 선언), 함숫값 반환을 위해 
{
	bank[0] = *a, bank[1] = *b, bank[2] = *c, bank[3] = *d; //은행 별 금액을 저장하는 배열에 포인터 변수 지정
	int total = bank[0] + bank[1] + bank[2] + bank[3]; //전체 금액은 배열을 더해서 구함
	int* p; //포인터 변수 p 선언
	p = &total; // 포인터 변수 p에 total 값 저장
	return total; //함숫값 반환
}

void myaccounts() //myaccounts 함수: 함수 실행 시 은행 계좌 별 금액 출력
{
	total(&m1, &m2, &m3, &m4); //위에서 선언한 변수가 total 함수의 주소가 됨
}

int main() //프로그램 시작점
{
	int i, j; //배열 출력을 위한 변수 선언
	int total_money = total(&m1, &m2, &m3, &m4); //total() 함숫값을 변수에 저장
	
	
	cout << "************** SWING 자산관리 서비스 **************" << endl;
	cout << "---------------- 은행 별 계좌정보 ----------------" << endl;
	
	for (i = 0; i < 4; i++) //은행 명을 저장한 배열 출력
	{
		cout << "   " << bank_name[i] << "   |";
	}
	cout << endl;
	
	for (j = 0; j < 4; j++) //은행 별 금액을 저장한 배열 출력
	{
		myaccounts(); //배열 출력을 위한 myaccount 함수 호출
		cout << "   " << bank[j] << "   |";
	}
	cout << endl;

	cout << "--------------------------------------------------" << endl;

	cout << "현재 SWING 자산관리 서비스에 등록된 회원님의 총 자산은 " << total_money << "원 입니다." << endl; //최종 문장 출력
	cout << "***************************************************" << endl;
}