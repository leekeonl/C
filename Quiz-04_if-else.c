#include <stdio.h>
int main() {
	//int money, balance = 1000000;
	//printf("���� �ܾ� : %d��\n", balance);
	//printf("���� �ݾ� �Է� : "); scanf_s("%d", &money);
	//
	//if (money % 1000 == 0 && money <= balance && money > 0) {
	//	balance -= money;
	//	printf("%d�� ���� ����!!\n", money);
	//	printf("��� �� �ܾ� : %d��\n", balance);
	//}
	//else {
	//	printf("���� �ݾ� ����~\n");
	//}

	int kor, mat, eng;
	printf("���� ���� �Է� : "); scanf_s("%d", &kor);
	printf("���� ���� �Է� : "); scanf_s("%d", &eng);
	printf("���� ���� �Է� : "); scanf_s("%d", &mat);
	double avg = (double)(kor + mat + eng)/ 3;

	if (kor >= 60 && eng >= 60 && mat >= 60) {
		printf("�� ���⸦ ������ ����~ �Ф�\n");
	}
	else {
		printf("Ǫ����~ ���Ƽ� �� �ϼ�~\n");
	}

}