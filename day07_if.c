#include <stdio.h>
//int main() {
//	int n;
//	printf("정수 입력 : "); scanf_s("%d", &n);
//	printf("n : %d\n", n);
//
//	double d;
//	printf("실수 입력 : "); scanf_s("%lf", &d);
//	printf("d : %f\n", d);
//
//	char ch;
//	printf("문자 입력 : "); while (getchar() != '\n') {}
//	scanf_s("%c", &ch, 1);
//
//	char stn[20];
//	printf("문자열 입력 : "); scanf_s("%s", stn, sizeof(stn));
//	printf("stn : %s\n", stn);
//}

//int main() {
//	//int n = 10;
//	//printf("n : %d\n", n);				// 10
//	//printf("n : %5d|\n", n);			//    10|
//	//printf("n : %-5d|\n", n);			// 10   |
//	//// 출력시 서식문자안에 정수값을 사용하면, 
//	//// 해당 위치에 정수값만큼 공간확보를 해서 데이터를 출력 한다..
//
//	//double d = 3.14;
//	//printf("d : %f\n", d);					// 3.140000
//	//printf("d : %.2f\n", d);				// 3.14
//	//// 실수 출력시 서식문자안에 '.'을 찍고 정수값을 써주면,
//	//// 소수점 뒤에 정수 자릿수까지의 소수점을 표현한다..
//	//printf("d : %7.2f|\n", d);				//    3.14|
//	//printf("d : %-7.2f|\n", d);				// 3.14   |
//}