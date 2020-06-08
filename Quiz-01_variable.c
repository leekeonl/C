#include <stdio.h>
int main() {
	// 8.888 를 변수에 저장한 후 출력
	double d1 = 8.888;
	printf("d1 : %f\n", d1);

	// d 를 변수에 저장한 후 출력
	char ch1 = 'd';
	printf("ch1 : %c\n", ch1);

	// 30 을 변수에 저장한 후 출력
	int n1 = 30;
	printf("n1 : %d\n", n1);

	// 이순신 을 변수에 저장한 후 출력
	char name[20] = "이순신";
	printf("name : %s\n", name);

	// 식 3.24 + 5.34 를 변수에 저장한 후 출력
	double d2 = 3.24, d3 = 5.34;
	double res = d2 + d3;
	double d4 = 3.24 + 5.34;
	d1 = 3.24 + 5.34;
	printf("d1 : %f\n", d1);

	// 식 10+20 을 변수에 저장한 후 출력
	int n2 = 10, n3 = 20;
	int res2 = n2 + n3;
	printf("%d + %d = %d\n", n2, n3, res2);
	n1 = 10 + 20;
	printf("n1 : %d\n", n1);

	// 3.333 를 변수에 저장한 후 출력
	d1 = 3.333;
	printf("d1 : %f\n", d1);

	// po 를 변수에 저장한 후 출력
	char stn[10] = "po";
	printf("stn : %s\n", stn);

	// ㄱ 을 변수에 저장한 후 출력
	char han[5] = "ㄱ";
	printf("han : %s\n", han);

	// 가나다라abcde 를 변수에 저장한 후 출력
	char stn2[20] = "가나다라abcde";
	printf("stn2 : %s\n", stn2);

	// abcd 12345 를 변수에 저장한 후 출력
	char stn3[20] = "abcd 12345";
	printf("stn3 : %s\n", stn3);

	// 010-2314-4212 을 변수에 저장한 후 출력
	char phone[20] = "010-1234-5678";
	printf("phone : %s\n", phone);
}