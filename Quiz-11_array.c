#include <stdio.h>
int main() {
	int ar[10];
	// �Է�
	for (int i = 0; i < 10; i++) {
		printf("%d��° �Է� : ", i + 1); scanf_s("%d", &ar[i]);
	}
	// Ȧ��
	int o_sum = 0, o_cnt = 0;
	printf("Ȧ�� : ");
	for (int i = 0; i < 10; i++) {
		if (ar[i] % 2 != 0) {
			o_cnt++;
			o_sum += ar[i];
			printf("%d ", ar[i]);
		}
	}
	printf("\n���� : %d, �� : %d\n", o_cnt, o_sum);
	printf("\n");
	// Ȧ��
	int e_sum = 0, e_cnt = 0;
	printf("¦�� : ");
	for (int i = 0; i < 10; i++) {
		if (ar[i] % 2 == 0) {
			e_cnt++;
			e_sum += ar[i];
			printf("%d ", ar[i]);
		}
	}
	printf("\n���� : %d, �� : %d\n", e_cnt, e_sum);
}