#include <stdio.h>
//int main() {
//	printf("정수 : %d\n", 10 + 100);
//	printf("실수 : %f\n", 3.14);
//	printf("문자 : %c\n", 'A');
//	printf("문자열 : %s\n", "문자열");
//}

//-------------------------------------------------

int main() {
	// 정수 변수
	int n = 10;
	printf("n : %d\n", n);

	// 실수 변수
	double d = 3.14;
	printf("d : %f\n", d);

	// 문자 변수
	char ch = 'V';
	printf("ch : %c\n", ch);

	// 문자열
	char stn[50] = "대통령";
	// stn = "비서"; Error
	printf("stn : %s\n", stn);
}