#include <stdio.h>
#define AR_SIZE 10
#define PI 3.141592
#define SQUARE(N) N*N
#define CIRCLE(R) SQUARE(R)*PI
#define P printf
#define START int main()
#define AGE_MAX 120
/*
��ũ��( macro )
- �����Ͽ� �ռ� �̸� ���ǵǾ� �ִ� �ڷ�� �ܼ� ġȯ�ϴ� ��
- ���α׷� �ۼ��� ���� ���Ǵ� �Լ�, ����, ����� �̵��� ��ǥ�ϴ� �̸��� �ٿ��� ����ϴ� ��
- ��ó���� �ش��Ѵ�..
*/
//int main() {
START{
	printf("%d\n", 10);
	printf("����, ���� 5�� ���� : %d\n", SQUARE(5));
	printf("������ 2�� ���� ���� : %.2f\n", CIRCLE(2));
	//int size = 5;
	//int ar[size];
	int ar[AR_SIZE];
	for (int i = 0; i < AR_SIZE; i++) {
		ar[i] = (i + 1) * 10;
	}
	for (int i = 0; i < AR_SIZE; i++) {
		P("ar[%d] : %d\n", i, ar[i]);
	}

}