#include <stdio.h>
int main() {
	int age;
	printf("나이 입력 : "); scanf_s("%d", &age);

	if (age > 19) {
		printf("%d 세 : 성인 => ", age);
		if (age < 40) {
			printf("청년층\n");
		}
		else {
			printf("중장년층\n");
		}
	}
	else {
		printf("%d 세 : 미성년자 => ", age);
		if (age > 13) {
			printf("청소년\n");
		}
		else {
			printf("어린이\n");
		}
	}
}