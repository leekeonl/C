#include <stdio.h>
int main() {
	int age;
	printf("���� �Է� : "); scanf_s("%d", &age);

	if (age > 19) {
		printf("%d �� : ���� => ", age);
		if (age < 40) {
			printf("û����\n");
		}
		else {
			printf("�������\n");
		}
	}
	else {
		printf("%d �� : �̼����� => ", age);
		if (age > 13) {
			printf("û�ҳ�\n");
		}
		else {
			printf("���\n");
		}
	}
}