#include <stdio.h>
#define LINEFEED printf("\n")
/*
전역변수
- 함수 밖에 선언된 변수
- 전역변수는 main 함수가 실해되기 전에 메로리에 생성되며,
  프로그램이 메모리에서 소멸된다..
- 전역변수임을 뜻하는 이름을 지어주고 사용하는게 좋다

지역변수
- 함수 안에 선언된 변수
- 지역변수는 함수가 호출되어 작동할때 메모리에서 활성화되고,
  함수가 종료되면 소멸된다..
  - 함수가 실행될때 마다 새로 정의 된다.
- 함수에 선언된 매개변수도 지역변수 이다.
*/

int all = 1;

void Func();
int main() {
	printf("all 값 : %d, 주소 : %d\n", all, &all);

	int mVal = 10;
	printf("mVal 값 : %d, 주소 : %d\n", mVal, &mVal);

	int val = 100;
	printf("main val 값 : %d, 주소 : %d\n", val, &val);
	LINEFEED;

	for (int i = 0; i < 3; i++) {
		int val = 1000;
		printf("for val 값 : %d, 주소 : %d\n", val, &val);
		Func();
	}
	LINEFEED;

	printf("all 값 : %d, 주소 : %d\n", all, &all);
	printf("main val 값 : %d, 주소 : %d\n", val, &val);
}
void Func() {
	printf("func 함수 실행\n");
	all += 1;
	int val = 1;
	printf("func val 값 : %d, 주소 : %d\n", val, &val);
}