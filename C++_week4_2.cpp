#include <iostream>
using namespace std;

class Shape //클래스 생성
{
	string NAME;
	int A;  //가로1
	int B;  //세로
	int C;  //가로2

public:
	Shape(int ...) { //클래스 생성자   //"int ..."으로 인자를 선언하면 생성자 호출 시 인자의 개수에 영향을 받지 않음
	}

	~Shape() { //클래스 소멸자
		cout << "Shape 소멸 " << NAME << " 클래스" << endl; //객체가 소멸될 때 실행됨
	}

	int getA(int A) { //A값 리턴
		return A;
	}

	int getB(int B) { //B값 리턴
		return B;
	}

	int getC(int C) { //C값 리턴
		return C;
	}
	
	int AreaLadder() { //사다리꼴의 넓이를 출력해주는 함수
		int S; //넓이 값을 저장할 변수 선언
		S = (A + B) * C / 2; //사다리꼴 넓이 = (가로1 + 가로2) * 높이 / 2
		cout << "사다리꼴의 넓이는 " << S << " 이다" << endl; //문장 출력
		NAME = "Ladder"; //클래스 객체 이름 저장
		return S; //S값 반환
	}

	int AreaRect() { //사각형의 넓이를 출력해주는 함수
		int S; //넓이 값을 저장할 변수 선언
		S = A * B; //사각형 넓이 = 가로 * 세로
		cout << "사각형의 넓이는 " << S << " 이다" << endl; //문장 출력
		NAME = "Rectangular"; //클래스 객체 이름 저장
		return S; //S값 반환
	}

	double AreaOval() { //타원의 넓이를 출력해주는 함수
		double S; //넓이 값을 저장할 변수 선언 (double 형으로 선언)
		S = A * B * 3.14; //타원 넓이 = 가로 * 세로 * 3.14(pi)
		cout << "타원의 넓이는 " << S << " 이다" << endl;
		NAME = "CircleA"; //클래스 객체 이름 저장
		return S; //S값 반환
	}

	void setTwo(int a, int b) { //타원의 A, B나 사각형의 A, B를 설정해주는 함수
		A = a;
		B = b;
	}

	void setThree(int a, int b, int c) { //사다리꼴의 A, B, C 길이를 설정해주는 함수
		A = a;
		B = b;
		C = c;
	}
};

int main()
{
	Shape a(5, 1); //객체 호출
	a.setTwo(5, 1); //타원의 A, B 값 지정
	a.AreaOval(); //타원 넓이 출력

	Shape b(10, 20); //객체 호출
	b.setTwo(10, 20); //사각형의 A, B 값 지정
	b.AreaRect(); //사각형 넓이 출력

	Shape c(3, 7, 4); //객체 호출
	c.setThree(4, 8, 4); //사다리꼴의 A, B, C 값 지정
	c.AreaLadder(); //사다리꼴 넓이 출력
	
	c.setThree(5, 10, 6); //사다리꼴의 A, B, C 값 지정
	c.AreaLadder(); //사다리꼴 넓이 출력
}
