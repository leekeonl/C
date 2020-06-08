#include <stdio.h>
int main() {
	int n = 10;
	int *ptn = &n;
	printf("n 林家 : %p ==  ptn 蔼 : %p\n", &n, ptn);
	printf("n : %d == *ptn : %d\n", n, *ptn);

	double d = 1.2;
	double *ptd = &d;
	printf("d 林家 : %p == ptd 蔼 : %p\n", &d, ptd);
	printf("d : %f == *ptd : %f\n", d, *ptd);

	char ch = 'A';
	char *ptch = &ch;
	printf("ch 林家 : %p == ptch 蔼 : %p\n", &ch, ptch);
	printf("ch : %c == *ptch : %c\n", ch, *ptch);
}