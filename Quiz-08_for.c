#include <stdio.h>
int main() {
	//for (int al = 65; al < 91; al++) {
	//	printf("%c ", al);
	//}
	//printf("\n");

	//for (char ch = 'A'; ch < 'Z' + 1; ch++) {
	//	printf("%c", ch);
	//	if (ch != 'Z')
	//		printf(", ");
	//}
	//printf("\n");

	//int sum = 0;
	//for (int i = 1; i < 11; i++) {
	//	if (i % 3 == 0) {
	//		printf("%d ", i);
	//		sum += i;
	//	}
	//}
	//printf("\n합 : %d\n", sum);

	//for (int dan = 2; dan < 10; dan++) {
	//	for (int i = 1; i < 10; i++) {
	//		printf("%d * %d = %d\n", dan, i, dan*i);
	//	}
	//}

	//for (int i = 1; i < 10; i++) {
	//	for (int dan = 2; dan < 10; dan++) {
	//		printf("%2d *%2d = %2d",dan,i,dan*i);
	//		if (dan != 9) printf(", ");
	//	}
	//	printf("\n");
	//}

	// 첫날은 1원을 예금하고요..다음날부터는 전날 예금한 금액의 2배씩 예금합니다.
	// 위와 같이 30일 동안 예금한 총 금액을 구하세요..
	int money = 1, sum = 1;
	for (int day = 2; day < 31; day++) {
		money *= 2;
		sum += money;
		printf("%2d day : 입금액 %-10d원 , 총액 : %-10d원\n", day, money, sum);
	}
	printf("한달 총 예금액 : %d원\n", sum);

	int n = 1;
	printf("한달 총 예금액 : %d원\n", (n<<30) - 1);
}