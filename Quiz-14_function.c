/*
- ���ϰ� X
1. ȭ�鿡 �Է¹��� �� ��ŭ �ȳ��ϼ���! �� ����ϴ� �Լ� ,
�Լ��� : SayHello

2. �� 2���� �ǳ׹޾� �հ踦 ȭ�鿡 ����ϴ� �Լ�
�Լ��� : Sum

- ���ϰ� O
3. ���� 1�� �ǳ׹޾� ���밪�� ��ȯ�ϴ� �Լ�
�Լ��� : Absolute

4. ȣ���ϸ� 50~100 ������ ������ int���� ��ȯ�ϴ� �Լ�
�Լ��� : Random

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
void SayHello(int n);
int InputInt();
void Sum(int n1, int n2);
int Absolute(int n);
int Random();
int main() {
	//int cnt;
	//printf("���� �Է� : "); scanf_s("%d", &cnt);
	//SayHello(cnt);

	//int num1, num2;
	//num1 = InputInt();
	//num2 = InputInt();
	//Sum(num1, num2);

	//int n, abs;
	//n = InputInt();
	//abs = Absolute(n);
	//printf("%d �� ���밪 : %d\n", n, abs);

	//srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++) {
		int res = Random();
		printf("������ : %d\n", res);
		Sleep(1000);
	}

}
int Random() {
	srand((unsigned int)time(NULL));
	return rand() % 51 + 50;
}
int Absolute(int n) {
	//if (n > 0)	return n;
	//else return n*-1;
	return (n > 0) ? n : n*-1;
}
void Sum(int n1, int n2) {
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
}
int InputInt() {
	int data;
	printf("���� �Է� : "); scanf_s("%d", &data);
	return data;
}
void SayHello(int n) {
	for (int i = 0; i < n; i++) {
		printf("%dȸ : �ȳ��ϼ���~^^\n", i+1);
	}
}