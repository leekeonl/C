#include <stdio.h>
int main() {
	////실수를 입력 받아 출력하시오
	//double d;
	//printf("실수 입력 : "); 
	//scanf_s("%lf", &d);
	//printf("d : %f\n", d);

	////자신의 이니셜을 입력 받아 출력하시오
	//char i1, i2, i3;
	//printf("첫번째 이니셜 입력 : "); 
	//while (getchar() != '\n') {}
	//scanf_s("%c", &i1, 1);
	//printf("두번째 이니셜 입력 : ");
	//while (getchar() != '\n') {}
	//scanf_s("%c", &i2, 1);
	//printf("세번째 이니셜 입력 : ");
	//while (getchar() != '\n') {}
	//scanf_s("%c", &i3, 1);
	////printf("이니셜 3개 입력 : ");
	////while (getchar() != '\n') {}
	////scanf_s("%c%c%c", &i1, 1, &i2, 1, &i3, 1);
	//printf("이니셜 : %c %c %c\n", i1, i2, i3);

	////3과목의 성적을 입력 받아 합계와 평균을 구하시오
	//int sub1, sub2, sub3;
	//printf("세과목 점수 입력 : ");
	//scanf_s("%d%d%d", &sub1, &sub2, &sub3);
	//int sum = sub1 + sub2 + sub3;
	//double avg = (double)sum / 3; //sum / 3.0;
	//printf("총점 : %d, 평균 : %f\n", sum, avg);

	//다음과 같이 데이터를 입력 받아 출력하시오
	//당신의 이름은 무엇입니까 ? 홍길동
	//홍길동님의 나이는 몇 살입니까 ? 20
	//홍길동님의 나이는 20살입니다.
	char name[20];
	int age;
	printf("이름 입력 : ");
	scanf_s("%s", name, sizeof(name));
	printf("%s님의 나이 입력 : ", name);
	scanf_s("%d", &age);
	printf("%s 님의 나이 : %d세\n", name, age);

}