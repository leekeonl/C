#include <stdio.h>
int main() {
	int n = 10;
	int *ptn = &n;
	printf("n �ּ� : %p ==  ptn �� : %p\n", &n, ptn);
	printf("n : %d == *ptn : %d\n", n, *ptn);

	double d = 1.2;
	double *ptd = &d;
	printf("d �ּ� : %p == ptd �� : %p\n", &d, ptd);
	printf("d : %f == *ptd : %f\n", d, *ptd);

	char ch = 'A';
	char *ptch = &ch;
	printf("ch �ּ� : %p == ptch �� : %p\n", &ch, ptch);
	printf("ch : %c == *ptch : %c\n", ch, *ptch);
}