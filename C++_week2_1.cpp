#include <iostream> //헤더 파일
using namespace std; //std 이름 공간에 선언된 이름에 std:: 생략

int main() //프로그램 시작점
{
	int num, count, i, j, multiple; //랜덤한 수, 특정배수 개수, 특정 배수, 숫자열 변수 선언

	srand(time(NULL)); //RANDOM 사용
	num = rand() % 101; //랜덤 범위 100까지 지정

	cout << "랜덤한 수: " << num << endl; //rand() 함수로 랜덤한 수 출력

	cout << "특정배수 개수: "; //특정배수 개수 입력을 위한 출력
	cin >> count; //변수에 값을 삽입할 수 있도록 cin 사용
	cout << endl; //줄바꿈

	cout << "<특정배수만 출력하는 프로그램>" << endl; //프로그램 제목 출력

	for (i = 1; i <= count; i++) //지정된 특정배수 개수만큼 범위 지정해서 반복문 출력
	{
		cout << i << "번째 특정 배수: "; //지정한 특정배수 개수만큼 출력 가능, 특정 배수 입력을 위한 출력
		cin >> multiple; //특정 배수 값을 삽입할 수 있도록 cin 사용
		cout << "<특정배수만 출력하는 프로그램>" << endl;
		for (j = 1; j <= num; j++) //지정된 랜덤 범위 내의 숫자열 출력
		{
			if (j % multiple != 0) //숫자가 지정된 수의 배수가 아닐 경우
				continue; //생략
			cout << j << ", "; //숫자열 출력
		}
		cout << endl;

		cout << "<특정배수 제외 출력하는 프로그램>" << endl;
		for (j = 1; j <= num; j++) //지정한 랜덤 범위 내의 숫자열 출력
		{
			if (j % multiple == 0) //숫자가 지정된 수의 배수일 경우
				continue; //생략
			cout << j << ", "; //숫자열 출력
		}
		cout << endl;
	}
	return 0;
}