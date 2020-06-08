#include <stdio.h>
int main() {
	int ar[10];
	// 입력
	for (int i = 0; i < 10; i++) {
		printf("%d번째 입력 : ", i + 1); scanf_s("%d", &ar[i]);
	}
	// 홀수
	int o_sum = 0, o_cnt = 0;
	printf("홀수 : ");
	for (int i = 0; i < 10; i++) {
		if (ar[i] % 2 != 0) {
			o_cnt++;
			o_sum += ar[i];
			printf("%d ", ar[i]);
		}
	}
	printf("\n개수 : %d, 합 : %d\n", o_cnt, o_sum);
	printf("\n");
	// 홀수
	int e_sum = 0, e_cnt = 0;
	printf("짝수 : ");
	for (int i = 0; i < 10; i++) {
		if (ar[i] % 2 == 0) {
			e_cnt++;
			e_sum += ar[i];
			printf("%d ", ar[i]);
		}
	}
	printf("\n개수 : %d, 합 : %d\n", e_cnt, e_sum);
}