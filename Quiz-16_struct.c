#include <stdio.h>
#include <string.h>
typedef struct onepice {
	char name[20];
	int lv;
	char item[20];
}onepice;
int main() {
	onepice roopi = { "����", 13, "����" };
	onepice chopa;// = { "����", 7, "����"}
	strcpy_s(chopa.name, sizeof(chopa.name), "����");
	chopa.lv = 7;
	strcpy_s(chopa.item, sizeof(chopa.item), "����");
	printf("%s �� ����\n", chopa.name);
	printf("���� : %d, ������ : %s\n", chopa.lv, chopa.item);
}