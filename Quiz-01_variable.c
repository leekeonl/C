#include <stdio.h>
int main() {
	// 8.888 �� ������ ������ �� ���
	double d1 = 8.888;
	printf("d1 : %f\n", d1);

	// d �� ������ ������ �� ���
	char ch1 = 'd';
	printf("ch1 : %c\n", ch1);

	// 30 �� ������ ������ �� ���
	int n1 = 30;
	printf("n1 : %d\n", n1);

	// �̼��� �� ������ ������ �� ���
	char name[20] = "�̼���";
	printf("name : %s\n", name);

	// �� 3.24 + 5.34 �� ������ ������ �� ���
	double d2 = 3.24, d3 = 5.34;
	double res = d2 + d3;
	double d4 = 3.24 + 5.34;
	d1 = 3.24 + 5.34;
	printf("d1 : %f\n", d1);

	// �� 10+20 �� ������ ������ �� ���
	int n2 = 10, n3 = 20;
	int res2 = n2 + n3;
	printf("%d + %d = %d\n", n2, n3, res2);
	n1 = 10 + 20;
	printf("n1 : %d\n", n1);

	// 3.333 �� ������ ������ �� ���
	d1 = 3.333;
	printf("d1 : %f\n", d1);

	// po �� ������ ������ �� ���
	char stn[10] = "po";
	printf("stn : %s\n", stn);

	// �� �� ������ ������ �� ���
	char han[5] = "��";
	printf("han : %s\n", han);

	// �����ٶ�abcde �� ������ ������ �� ���
	char stn2[20] = "�����ٶ�abcde";
	printf("stn2 : %s\n", stn2);

	// abcd 12345 �� ������ ������ �� ���
	char stn3[20] = "abcd 12345";
	printf("stn3 : %s\n", stn3);

	// 010-2314-4212 �� ������ ������ �� ���
	char phone[20] = "010-1234-5678";
	printf("phone : %s\n", phone);
}