#include <stdio.h>
/*
scanf : �⺻�Է�
- scanf("�Էµ���������(���Ĺ���)", �Է°����� �ּ�);
*/
int main() {
	//char c;
	//printf("���� �Է� : "); 
	//c = getchar();
	//printf("c : %c\n", c);
	//putchar(c);

	//// ���� �Է�
	//int n;
	//printf("���� �Է� : ");
	////scanf("%d", &n); // �⺻ ����
	//// SDL �˻� ����� �⺻ ������ ���Ұ�
	//scanf_s("%d", &n); 
	//printf("n : %d\n", n);

	//// �Ǽ� �Է�
	//float f;
	//double d;
	//printf("�Ǽ� 2�� �Է� : ");
	//// scanf("%f%lf", &f, &d);
	//// float Ÿ���� ������ �Է½ÿ��� ���Ĺ��� '%f' ���
	//// double Ÿ���� ������ �Է½ÿ��� ���Ĺ��� '%lf' ���
	//scanf_s("%f%lf", &f, &d);
	//printf("f : %f, d : %f\n", f, d);

	//// ���� �Է�
	//char ch;
	//printf("���� �Է� : ");
	//// scanf("%c", &ch);
	//getchar();
	//scanf_s("%c", &ch, 1);
	//// SDL �˻� ���� 
	//// - ���� or ���ڿ� �Է½ÿ��� �Է� ��� ũ�Ⱚ�� ������ �ش�( byte ���� )
	//// - scanf_s("�Է¼��Ĺ���", �Է� ���� �ּ�, �Է� ��� ũ��);
	//printf("ch : %c, %d\n", ch, ch);
	//printf("%c", 10);

	// ���ڿ�
	//char stn[10];
	//printf("���ڿ� �Է� : ");
	////scanf("%s", stn);
	//scanf_s("%s", stn, sizeof(stn));//20);
	//printf("stn : %s\n", stn);

	//char stn2[10];
	//printf("���ڿ� �Է� : ");
	////scanf("%s", stn);
	//while ( getchar()!='\n') { }
	//scanf_s("%s", stn2, sizeof(stn2));//20);
	//printf("stn2 : %s\n", stn2);

	// ���� �Է�
	char stn3[50];
	printf("���� �Է� : ");
	//gets(stn3); // �⺻Ÿ��
	gets_s(stn3, sizeof(stn3));
	printf("stn3 : %s\n", stn3);
	puts(stn3);
}