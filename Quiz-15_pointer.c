#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define AR_SIZE 5
char InputChar() {
	char ch;
	printf("소문자 입력 : "); scanf_s("%c", &ch, 1);
	return ch;
}
void UpperChar(char *pch) {
	if (*pch >= 'a'&&*pch <= 'z')
		*pch -= 32;
	else {
		printf("소문자가 아니에요~\n");
	}
}
void ShowCh(char ch) {
	printf("ch : %c\n", ch);
}
void RandMaxMin(int *par, int *pmax, int *pmin);
void ShowMaxMin(int max, int min);
int main() {
	//char ch;
	//ch = InputChar();
	//UpperChar(&ch);
	//ShowCh(ch);

	int ar[AR_SIZE];
	int max = 0, min = 0;
	RandMaxMin(ar, &max, &min);
	ShowMaxMin(max, min);
}
void ShowMaxMin(int max, int min) {
	printf("큰값 : %d, 작은값 : %d\n", max, min);
}
void RandMaxMin(int *par, int *pmax, int *pmin) {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < AR_SIZE; i++) {
		par[i] = rand() % 100 + 1;
		printf("%d ", par[i]);
		if (i == 0) {
			*pmax = *pmin = par[i];
		}
		else {
			if (*pmax < par[i]) *pmax = par[i];
			if (*pmin > par[i]) *pmin = par[i];
		}
	}
	printf("\n");
}