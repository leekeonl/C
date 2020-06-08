#include <stdio.h>
#include <string.h>
typedef struct onepice {
	char name[20];
	int lv;
	char item[20];
}onepice;
int main() {
	onepice roopi = { "루피", 13, "고무고무" };
	onepice chopa;// = { "초파", 7, "럼블볼"}
	strcpy_s(chopa.name, sizeof(chopa.name), "초파");
	chopa.lv = 7;
	strcpy_s(chopa.item, sizeof(chopa.item), "고무고무");
	printf("%s 의 정보\n", chopa.name);
	printf("레벨 : %d, 아이템 : %s\n", chopa.lv, chopa.item);
}