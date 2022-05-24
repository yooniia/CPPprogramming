#include <iostream>
#include <string>
using namespace std;

class Member { //클래스 선언
	string Name, Id, Password, login_Name, login_Id, login_Password;
	string a, b, c, d;
	int num;
public:
	string getName() { //Name 값 리턴
		return Name;
	}
	string getId() { //Id 값 리턴
		return Id;
	}
	string getPassword() { //Password 값 리턴
		return Password;
	}
	void setName() { //회원가입 시에 이름을 입력 받음
		cout << "이름: ";
		cin >> Name;
	}
	void setId() { //회원가입 시에 Id를 입력 받음
		cout << "아이디: ";
		cin >> Id;
	}
	void setPassword() { //회원가입 시에 Password를 입력 받음
		cout << "비밀번호: ";
		cin >> Password;
	}
	void guestin() { //회원가입 구현 함수
		setName();
		setId();
		setPassword(); //Name, Id, Password 입력 함수 호출
		cout << endl;
		cout << "=== 회원가입 성공 ===" << endl << endl;
	}
	void login() { //로그인 구현 함수
		while (1) { //무한 루프
			cout << "아이디: ";
			cin >> login_Id; //아이디 입력
			cout << "비밀번호: ";
			cin >> login_Password; //비밀번호 입력

			if (Id != login_Id || Password != login_Password) { //아이디나 비밀번호 중 하나라도 틀릴 경우
				cout << "아이디 혹은 비밀번호가 틀렸습니다." << endl << endl;
			}
			else { //둘 다 맞으면
				cout << "=== 로그인 성공 ===" << endl; //성공
				cout << endl;
				cout << Name << "님 환영합니다." << endl;
				break;
			}
		}
	}
	void start() { //시작 함수
		while (1) { //무한 루프
			cout << "-------------------- 서울여자대학교 종합정보시스템 --------------------" << endl;
			cout << "1. 회원가입" << endl;
			cout << "2. 로그인" << endl << endl;
			cout << "번호를 입력하세요 >> ";
			cin >> num;
			cout << "-----------------------------------------------------------------------" << endl << endl;
			if (num == 1) { //회원가입 선택
				guestin(); //회원가입 구현 함수 호출
			}
			else if (num == 2) { //로그인 선택
				login(); //로그인 구현 함수
				break; 
			}
			else { //다른 숫자 선택
				cout << "1 또는 2만 입력해주세요" << endl;
			}
		}
	}
};

class Cart { //클래스 선언
	string code;
	string Array;
	int num;
public:
	void print() { //강의 목록을 배열로 출력하는 함수
		string CartArray[3] = { "c++ 프로그래밍", "linux 프로그래밍", "리버싱" }; //강의 이름
		string* p; //포인터
		p = CartArray;
		string num_CartArray[3] = { "0001", "0002", "0003" }; //강의 학수번호
		string* q; //포인터
		q = num_CartArray;

		cout << "========== 강의목록 ==========" << endl << endl; //강의목록 출력
		for (int i = 0; i < 3; i++) {
			cout << "[" << i + 1 << "] " << p[i] << " >> " << q[i] << endl;
		}
		cout << endl;
	}
	void bag_course() { //강의 담기 기능 함수
		cout << "추가할 학수 번호 >> ";
		cin >> code;
	}
	void put_bag() { //수강신청 확인 기능 함수
		cout << "======== My 장바구니 ========" << endl;
		cout << "1. " << code << endl;
		cout << "2. " << endl;
		cout << "3. " << endl;
	}
	void logout() { //로그아웃 구현 함수
		cout << "---------- 로그아웃 ----------" << endl;
		cout << "로그아웃 되었습니다. 안녕히 가세요." << endl;
	}
};

int main()
{
	int num;
	Member A;
	A.start(); //시작 함수 호출

	Cart B;
	
	while (1) { //무한 루프
		cout << "====================" << endl;
		cout << "1. 장바구니" << endl;
		cout << "2. 강의 담기" << endl;
		cout << "3. 수강신청 확인" << endl;
		cout << "4. 로그아웃" << endl << endl;
		cout << "번호를 입력하세요: ";
		cin >> num;
		cout << endl;

		if (num == 1) { //장바구니 선택
			B.print(); //강의 목록 배열 출력 함수 호출
		}
		else if (num == 2) { //강의 담기 선택
			B.bag_course(); //강의 담기 기능 함수 호출
		}
		else if (num == 3) { //수강신청 확인 선택
			B.put_bag(); //수강신청 확인 기능 함수 호출
		}
		else if (num == 4) { //로그아웃 선택
			B.logout(); //로그아웃 구현 함수 호출
			break; //종료
		}
	}
}