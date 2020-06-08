#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
100 ~ 200 사이의 랜덤수 10개를  생성해서 배열에 저장한 후 출력하세요..
단,  발생한 랜덤수는 홀수 여야 합니다..
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