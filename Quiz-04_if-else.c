#include <stdio.h>
int main() {
	//int money, balance = 1000000;
	//printf("통장 잔액 : %d원\n", balance);
	//printf("인출 금액 입력 : "); scanf_s("%d", &money);
	//
	//if (money % 1000 == 0 && money <= balance && money > 0) {
	//	balance -= money;
	//	printf("%d원 인출 성공!!\n", money);
	//	printf("출금 후 잔액 : %d원\n", balance);
	//}
	//else {
	//	printf("인출 금액 오류~\n");
	//}

	int kor, mat, eng;
	printf("국어 점수 입력 : "); scanf_s("%d", &kor);
	printf("영어 점수 입력 : "); scanf_s("%d", &eng);
	printf("수학 점수 입력 : "); scanf_s("%d", &mat);
	double avg = (double)(kor + mat + eng)/ 3;

	if (kor >= 60 && eng >= 60 && mat >= 60) {
		printf("넌 여기를 나가도 좋다~ ㅠㅠ\n");
	}
	else {
		printf("푸하하~ 남아서 더 하쇼~\n");
	}

}