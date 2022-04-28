#include <iostream> // 전처리기에 내리는 지시문, C++ 표준 입출력을 위한 클래스와 객체 선언
using namespace std; // 헤더 파일에 선언된 이름을 사용할 때 std:: 생략

int main() // 프로그램 실행 시작점, main 함수가 종료되면 프로그램 종료
{
	cout << "당신의 이름은 무엇입니까? "; // cout: 데이터를 콘솔 화면에 출력할 때 사용하는 명령어
	char name0[12]; 
	cin.getline(name0, 12, '\n'); // 공백을 포함한 문자열을 입력받을 수 있음
	cout << "반갑습니다. " << name0 << "님\n\n"; // name0에 6열에서 << 뒤에 입력한 피연산자 출력
	
	cout << "----------SWING 30----------\n";
	cout << "음료의 가격 입력을 시작합니다.\n\n";

	int coke; //int 변수 선언
	int water;
	int fanta;
	int coke_num;
	int water_num;
	int fanta_num;
	int x;
	int sum;
	int price;

	x = 500; // 변수 x에 할인 금액 지정

	cout << "콜라의 가격 : "; // cout 명령어를 통해 각각의 가격 지정
	cin >> coke; // cin: 키보드와 응용프로그램을 연결하는 입력 스트림 객체, 오른쪽 피연산자에 지정된 변수 삽입
	cout << "삼다수의 가격 : ";
	cin >> water;
	cout << "환타의 가격 : ";
	cin >> fanta;

	cout << "\n개수를 입력해주세요.\n\n";

	cout << "콜라 수량 : "; // cout 명령어를 통해 각각의 수량 지정
	cin >> coke_num;
	cout << "삼다수 수량 : ";
	cin >> water_num;
	cout << "환타 수량 : ";
	cin >> fanta_num;
	cout << "----------------------------\n";
	
	sum = (coke * coke_num) + (water * water_num) + (fanta * fanta_num); // 전체 금액 계산
	price = sum - x; // 할인 금액을 적용한 총 금액 계산

	cout << x << "원을 할인받아 총 " << price << "원입니다.\n";

	return 0; //main() 함수에서는 예외적으로 return 문 생략 가능, 생략 시 자동으로 return 0; 실행
}