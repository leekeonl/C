#include <stdio.h>
int main() {
	//int month;
	//printf("�� �Է� : "); scanf_s("%d", &month);

	//switch (month) {
	//case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	//	printf("%d �� : 31��\n", month); break;
	//case 2:
	//	printf("%d �� : 28 or 29��\n", month); break;
	//case 4: case 6: case 9: case 11:
	//	printf("%d �� : 30��\n", month); break;
	//default:
	//	printf("��� �� ����̿�~\n");
	//}

	char opt;
	printf("+ , - , * , / ���� :: "); scanf_s("%c", &opt, 1);

	int n1, n2, judge = 1;
	double res = 0;
	printf("���� 2�� �Է� : "); scanf_s("%d%d", &n1, &n2);

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
		printf("��� �Ұ�~\n");
	}
}