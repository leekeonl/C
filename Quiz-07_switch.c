#include <stdio.h>
int main() {
	//int month;
	//printf("월 입력 : "); scanf_s("%d", &month);

	//switch (month) {
	//case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	//	printf("%d 월 : 31일\n", month); break;
	//case 2:
	//	printf("%d 월 : 28 or 29일\n", month); break;
	//case 4: case 6: case 9: case 11:
	//	printf("%d 월 : 30일\n", month); break;
	//default:
	//	printf("어느 별 사람이요~\n");
	//}

	char opt;
	printf("+ , - , * , / 선택 :: "); scanf_s("%c", &opt, 1);

	int n1, n2, judge = 1;
	double res = 0;
	printf("정수 2개 입력 : "); scanf_s("%d%d", &n1, &n2);

	switch(opt) {
	case '+':
		res = n1 + n2; break;
	case '-':
		res = n1 - n2; break;
	case '*':
		res = n1 * n2; break;
	case '/':
		if (n2 > 0)
			res = (double)n1 / n2;
		else
			judge = 0;
		break;
	default:
		judge = 0;
	}
	if (judge) {
		if (opt != '/')
			printf("%d %c %d = %.0f\n", n1, opt, n2, res);
		else 
			printf("%d %c %d = %f\n", n1, opt, n2, res);
	}
	else {
		printf("계산 불가~\n");
	}
}