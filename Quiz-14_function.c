/*
- 리턴값 X
1. 화면에 입력받은 값 만큼 안녕하세요! 를 출력하는 함수 ,
함수명 : SayHello

2. 수 2개를 건네받아 합계를 화면에 출력하는 함수
함수명 : Sum

- 리턴값 O
3. 수를 1개 건네받아 절대값을 반환하는 함수
함수명 : Absolute

4. 호출하면 50~100 사이의 랜덤한 int값을 반환하는 함수
함수명 : Random

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
void SayHello(int n);
int InputInt();
void Sum(int n1, int n2);
int Absolute(int n);
int Random();
int main() {
	//int cnt;
	//printf("숫자 입력 : "); scanf_s("%d", &cnt);
	//SayHello(cnt);

	//int num1, num2;
	//num1 = InputInt();
	//num2 = InputInt();
	//Sum(num1, num2);

	//int n, abs;
	//n = InputInt();
	//abs = Absolute(n);
	//printf("%d 의 절대값 : %d\n", n, abs);

	//srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++) {
		int res = Random();
		printf("랜덤값 : %d\n", res);
		Sleep(1000);
	}

}
int Random() {
	srand((unsigned int)time(NULL));
	return rand() % 51 + 50;
}
int Absolute(int n) {
	//if (n > 0)	return n;
	//else return n*-1;
	return (n > 0) ? n : n*-1;
}
void Sum(int n1, int n2) {
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
}
int InputInt() {
	int data;
	printf("정수 입력 : "); scanf_s("%d", &data);
	return data;
}
void SayHello(int n) {
	for (int i = 0; i < n; i++) {
		printf("%d회 : 안녕하세요~^^\n", i+1);
	}
}