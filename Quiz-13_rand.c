#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
100 ~ 200 ������ ������ 10����  �����ؼ� �迭�� ������ �� ����ϼ���..
��,  �߻��� �������� Ȧ�� ���� �մϴ�..
*/
int main() {
	int ar[10];
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++) {
		ar[i] = rand() % 101 + 100;
		if (ar[i] % 2 == 0) {
			--i;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", ar[i]);
	}
	printf("\n");
}