#include <stdio.h>
int main() {
	////�Ǽ��� �Է� �޾� ����Ͻÿ�
	//double d;
	//printf("�Ǽ� �Է� : "); 
	//scanf_s("%lf", &d);
	//printf("d : %f\n", d);

	////�ڽ��� �̴ϼ��� �Է� �޾� ����Ͻÿ�
	//char i1, i2, i3;
	//printf("ù��° �̴ϼ� �Է� : "); 
	//while (getchar() != '\n') {}
	//scanf_s("%c", &i1, 1);
	//printf("�ι�° �̴ϼ� �Է� : ");
	//while (getchar() != '\n') {}
	//scanf_s("%c", &i2, 1);
	//printf("����° �̴ϼ� �Է� : ");
	//while (getchar() != '\n') {}
	//scanf_s("%c", &i3, 1);
	////printf("�̴ϼ� 3�� �Է� : ");
	////while (getchar() != '\n') {}
	////scanf_s("%c%c%c", &i1, 1, &i2, 1, &i3, 1);
	//printf("�̴ϼ� : %c %c %c\n", i1, i2, i3);

	////3������ ������ �Է� �޾� �հ�� ����� ���Ͻÿ�
	//int sub1, sub2, sub3;
	//printf("������ ���� �Է� : ");
	//scanf_s("%d%d%d", &sub1, &sub2, &sub3);
	//int sum = sub1 + sub2 + sub3;
	//double avg = (double)sum / 3; //sum / 3.0;
	//printf("���� : %d, ��� : %f\n", sum, avg);

	//������ ���� �����͸� �Է� �޾� ����Ͻÿ�
	//����� �̸��� �����Դϱ� ? ȫ�浿
	//ȫ�浿���� ���̴� �� ���Դϱ� ? 20
	//ȫ�浿���� ���̴� 20���Դϴ�.
	char name[20];
	int age;
	printf("�̸� �Է� : ");
	scanf_s("%s", name, sizeof(name));
	printf("%s���� ���� �Է� : ", name);
	scanf_s("%d", &age);
	printf("%s ���� ���� : %d��\n", name, age);

}