#include <stdio.h>
/*
scanf : 기본입력
- scanf("입력데이터형식(서식문자)", 입력공간의 주소);
*/
int main() {
	//char c;
	//printf("문자 입력 : "); 
	//c = getchar();
	//printf("c : %c\n", c);
	//putchar(c);

	//// 정수 입력
	//int n;
	//printf("정수 입력 : ");
	////scanf("%d", &n); // 기본 형식
	//// SDL 검사 실행시 기본 형식은 사용불가
	//scanf_s("%d", &n); 
	//printf("n : %d\n", n);

	//// 실수 입력
	//float f;
	//double d;
	//printf("실수 2개 입력 : ");
	//// scanf("%f%lf", &f, &d);
	//// float 타입의 공간에 입력시에는 서식문자 '%f' 사용
	//// double 타입의 공간에 입력시에는 서식문자 '%lf' 사용
	//scanf_s("%f%lf", &f, &d);
	//printf("f : %f, d : %f\n", f, d);

	//// 문자 입력
	//char ch;
	//printf("문자 입력 : ");
	//// scanf("%c", &ch);
	//getchar();
	//scanf_s("%c", &ch, 1);
	//// SDL 검사 실행 
	//// - 문자 or 문자열 입력시에는 입력 허용 크기값을 지정해 준다( byte 단위 )
	//// - scanf_s("입력서식문자", 입력 공간 주소, 입력 허용 크기);
	//printf("ch : %c, %d\n", ch, ch);
	//printf("%c", 10);

	// 문자열
	//char stn[10];
	//printf("문자열 입력 : ");
	////scanf("%s", stn);
	//scanf_s("%s", stn, sizeof(stn));//20);
	//printf("stn : %s\n", stn);

	//char stn2[10];
	//printf("문자열 입력 : ");
	////scanf("%s", stn);
	//while ( getchar()!='\n') { }
	//scanf_s("%s", stn2, sizeof(stn2));//20);
	//printf("stn2 : %s\n", stn2);

	// 띄어쓰기 입력
	char stn3[50];
	printf("띄어쓰기 입력 : ");
	//gets(stn3); // 기본타입
	gets_s(stn3, sizeof(stn3));
	printf("stn3 : %s\n", stn3);
	puts(stn3);
}