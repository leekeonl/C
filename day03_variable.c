#include <stdio.h>
//int main() {
//	printf("���� : %d\n", 10 + 100);
//	printf("�Ǽ� : %f\n", 3.14);
//	printf("���� : %c\n", 'A');
//	printf("���ڿ� : %s\n", "���ڿ�");
//}

//-------------------------------------------------

int main() {
	// ���� ����
	int n = 10;
	printf("n : %d\n", n);

	// �Ǽ� ����
	double d = 3.14;
	printf("d : %f\n", d);

	// ���� ����
	char ch = 'V';
	printf("ch : %c\n", ch);

	// ���ڿ�
	char stn[50] = "�����";
	// stn = "��"; Error
	printf("stn : %s\n", stn);
}