#include <stdio.h>
//int main() {
//	//int n1, n2, res;
//	//printf("���� 2�� �Է� : "); scanf_s("%d%d", &n1, &n2);
//
//	//if (n1 > n2) {
//	//	res = n1 - n2;
//	//	printf("%d - %d = %d\n", n1, n2, res);
//	//}
//	//else if (n1 < n2) {
//	//	res = n2 - n1;
//	//	printf("%d - %d = %d\n", n2, n1, res);
//	//}
//	//else {
//	//	printf("�μ��� ����\n");
//	//}
//
//	int kor, mat, eng;
//	printf("���� ���� �Է� : "); scanf_s("%d", &kor);
//	printf("���� ���� �Է� : "); scanf_s("%d", &eng);
//	printf("���� ���� �Է� : "); scanf_s("%d", &mat);
//	int sum = kor + eng + mat;
//	double avg = (double)sum / 3;
//	char grade;
//	if (avg >= 90) grade = 'A';
//	else if (avg >= 80) grade = 'B';
//	else if (avg >= 70) grade = 'C';
//	else if (avg >= 60) grade = 'D';
//	else grade = 'F';
//	printf("���� : %d, ��� : %.1f, ���� : %c\n", sum, avg, grade);
//
//}

//--------------------------------------------------

int main() {
	double height, weight, bmi;
	printf("Ű�Է� : "); scanf_s("%lf", &height);
	printf("������ �Է� : "); scanf_s("%lf", &weight);

	bmi = weight / ((height / 100)*(height / 100));
	printf("bmi ���� : %.1f\n", bmi);

	if (bmi <= 18.5) printf("���� ���~\n");
	else if (bmi < 25) printf("�Ϳ�~ ���� ���ϳ׿�..\n");
	else if (bmi < 30) printf("��~ �� �ٿ��� �ھ��.\n");
	else printf("���ϰ� ưư�ϳ׿�~\n");
}