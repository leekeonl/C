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
	//printf("\n�� : %d\n", sum);

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

	// ù���� 1���� �����ϰ��..���������ʹ� ���� ������ �ݾ��� 2�辿 �����մϴ�.
	// ���� ���� 30�� ���� ������ �� �ݾ��� ���ϼ���..
	int money = 1, sum = 1;
	for (int day = 2; day < 31; day++) {
		money *= 2;
		sum += money;
		printf("%2d day : �Աݾ� %-10d�� , �Ѿ� : %-10d��\n", day, money, sum);
	}
	printf("�Ѵ� �� ���ݾ� : %d��\n", sum);

	int n = 1;
	printf("�Ѵ� �� ���ݾ� : %d��\n", (n<<30) - 1);
}