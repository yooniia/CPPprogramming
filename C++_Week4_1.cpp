#include <iostream> //헤더 파일 선언
using namespace std; //std 이름 공간에 선언된 이름에 std:: 생략

class Box //class 선언
{
public: //접근지정자를 public으로 설정
	int w1, h1;
	char f1; //변수 선언

	Box(int w, int h) { //클래스 생성자
		w1 = w;
		h1 = h; //선언한 변수에 값을 대입하기 위함
	}

	char setFil(char f = '*') { //문자를 세팅하는 함수 (디폴트 문자 '*'를 설정하기 위해 함수 인자에 대입)
		f1 = f; //선언한 변수에 값을 대입하기 위함
		return 0; //값 반환
	}

	int setSize(int w, int h) { //사각형 크기를 세팅하는 함수
		w1 = w; 
		h1 = h; //선언한 변수에 값을 대입하기 위함
		return 0; //값 반환
	}

	void draw() { //사각형을 출력하는 함수
		int i, j; //반복문 출력을 위한 변수 선언
		for (i = 0; i < h1; i++) {
			for (j = 0; j < w1; j++) {
				cout << f1; //문자를 세팅할 때 선언한 변수 출력 (반복문)
			}
			cout << endl;
		}
	}
};

int main() //프로그램 시작점
{
	Box square1(3, 4); //객체 호출 (가로 3, 세로 4)
	square1.setFil(); //디폴트 문자 '*'로 설정되어 있으므로 괄호 안에 문자 필요X
	square1.setSize(3, 4); //사각형의 크기를 가로 3, 세로 4로 설정함
	square1.draw(); //문자 '*', 크기가 가로 3, 세로 4인 사각형 출력

	cout << endl;

	Box square2(6, 10); //객체 호출 (가로 6, 세로 10)
	square2.setFil('^'); //디폴트 문자가 '*'로 설정되어 있으므로 '^'로 다시 세팅
	square2.setSize(6, 10); //사각형의 크기를 가로 6, 세로 10으로 설정함
	square2.draw(); //문자 '^', 크기가 가로 6, 세로 10인 사각형 출력
}