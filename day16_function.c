#include <stdio.h>
#include <Windows.h>
/*
함수 ( function )
- 독립적인 기능을 실행하는 작은 프로그램
*/

//// 함수 선언
//// - 컴파일러에게 어떤 함수가 있다고 알려주는것
////   - main 함수 전에 위치한다
//// 반환타입  함수이름(매개변수 타입);
//int Func(int n); 
//int main() {
//	int n = 10;
//	// 함수 호출
//	// - 만들어져있는 함수를 사용하기 부르는 것
//	// - 함수이름 : 사용하려는 기능이 정의된 함수이름
//	//   인자값 : 사용하려는 함수의 기능을 실행하기 위해 입력하는 값( O, X )
//	//			 - 함수에 전달 할 값이 없으면 비워두면 된다.
//	// 함수이름( 인자값 )
//	n = Func(n);
//	printf("n : %d\n", n);
//}
////함수 정의
////- 반환타입 : 함수 실행이 종료된 후에 호출부로 돌아갈때 가져가는 값의 자료형( O, X )
////            반환값이 없으면 'void' 로 선언한다
////- 함수이름 : 함수를 호출할때 사용 할 이름
////            함수이름은 함수가 실행 할 기능과 연관성 있게 지어준다
////- 매개변수 : 호출부에서 전달받은 값을 받아서 함수에서 사용할 변수의 초기값( O, X )
////			호출부에서 인자값이 없으면 공란으로 두거나 'void' 를 입력한다
////- return : 함수 실행후 결과값을 호출부로 되돌려 줄 때 사용
////            반환되는 값이 없으면 비워둔다..
//
//// 반환타입   함수이름( 매개변수 ){
//int Func(int n) {
//	n++;
//	return n;
//}

//------------------------------------------------------------

int IntegerIn();
int Add(int n);
void Result(int n);
void Line();
void End();
void Error();
int Menu();
int main() {
	int n;
	while (1) {
		system("cls"); // 콘솔창에 출력된 내용 지우기
		int sel = Menu();
		switch (sel) {
		case 1: // 입력
			n = IntegerIn(); 
			printf("입력 값 : %d\n", n);
			Sleep(2000); // 1/1000초 단위로 프로그램의 실행을 지연시키는 함수
			break;
		case 2: // 계산
			n = Add(n);
			Result(n);
			system("pause"); // 프로그램의 실행을 일시정지시키는 함수
			break;
		case 3:
			End();
		default:
			Error();
			Sleep(2000);
		}
	}
	//Line();


	//int val;
	////printf("정수 입력 : "); scanf_s("%d", &n);
	//val = IntegerIn();
	//printf("입력 값 : %d\n", val);
}
void Error(){ printf("입력 오류"); }
void End() {
	printf("프로그램 종료\n");
	exit(0); // 프로그램 강제 종료
}
int Menu() {
	int sel;
	printf("테스트 프로그램\n");
	printf("1. 입력\n");
	printf("2. 계산\n");
	printf("3. 종료\n");
	Line();
	printf("선택 :: "); scanf_s("%d", &sel);
	return sel;
}
void Line() {
	printf("---------------------\n");
}
void Result(int n) {
	printf("결과값 : %d\n", n);
	Line();
}
int Add(int n) {
	int select;
	printf("선택(1.+1  2.+10  3.+100) :: "); scanf_s("%d", &select);
	switch (select) {
	case 1:
		n += 1; break;
	case 2:
		n += 10; break;
	case 3:
		n += 100; break;
	}
	return n;
}
int IntegerIn() {
	int n;
	printf("정수 입력 : "); scanf_s("%d", &n);
	return n;
}
