#include <stdio.h>
int main() {
	int n1, n2, n3;
	////�Է��� �����Ͱ� 3�� ����� ��� ����Ͻÿ�.
	//printf("Q-1.���� �Է� : "); scanf_s("%d", &n1);
	//if (n1 % 3 == 0)
	//	printf("%d : 3�� ���\n", n1);
	//if (n1 % 3 != 0)
	//	printf("%d : 3�� ����� �ƴϴ�\n", n1);

	////�μ��� �Է� �޾� ū ���� ����Ͻÿ�
	//printf("Q-2.���� 2�� �Է� : "); scanf_s("%d%d", &n1, &n2);
	//int big;
	//if (n1 > n2)
	//	big = n1;
	//if (n2 > n1)
	//	big = n2;
	//if (n1 == n2)
	//	printf("�μ��� ����\n");
	//if(n1!=n2)
	//	printf("%d ��(��) %d �� ū�� : %d\n", n1, n2, big);

	////������ �Է� �޾� ū ���� ����Ͻÿ�
	//printf("Q-3.���� 3�� �Է� : "); scanf_s("%d%d%d", &n1, &n2, &n3);
	//int big2;
	////if (n1 > n2) big2 = n1;
	////if (n1 < n2) big2 = n2;
	////if (big2 < n3) big2 = n3;
	//if (n1 > n2 && n1 > n3) big2 = n1;
	//if (n2 > n1 && n2 > n3) big2 = n2;
	//if (n3 > n1 && n3 > n2) big2 = n3;
	//printf("%d %d %d �� ū�� : %d\n", n1, n2, n3, big2);

	////�μ��� �Է� �޾� ū ���� ¦���̸� ����Ͻÿ�
	//printf("Q-4.���� 2�� �Է� : "); scanf_s("%d%d", &n1, &n2);
	//int big3;
	//if (n1 > n2) big3 = n1;
	//if (n1 < n2) big3 = n2;
	//if (big3 % 2 == 0)
	//	printf("%d : ū���̰� ¦��\n", big3);
	//if (big3 % 2 != 0)
	//	printf("%d : ū�������� ¦���� �ƴϴ�.\n", big3);


	//�μ��� �Է� �޾�  �μ���  ���� ���� ¦���̰� 3�� ����� ���� ����Ͻÿ�
	printf("Q-5.���� 2�� �Է� : "); scanf_s("%d%d", &n1, &n2);
	int sum = n1 + n2;
	
	if (sum % 2 == 0 && sum % 3 == 0)
		printf("%d : ¦�� and 3�� ���\n", sum);
	if (sum % 2 != 0 || sum % 3 != 0)
		printf("%d : ¦���� �ƴϰų�, 3�� ����� �ƴϴ�\n", sum);

}