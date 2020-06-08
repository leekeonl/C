#include <stdio.h>
//int main() {
//	//int n1, n2, res;
//	//printf("정수 2개 입력 : "); scanf_s("%d%d", &n1, &n2);
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
//	//	printf("두수는 같다\n");
//	//}
//
//	int kor, mat, eng;
//	printf("국어 점수 입력 : "); scanf_s("%d", &kor);
//	printf("영어 점수 입력 : "); scanf_s("%d", &eng);
//	printf("수학 점수 입력 : "); scanf_s("%d", &mat);
//	int sum = kor + eng + mat;
//	double avg = (double)sum / 3;
//	char grade;
//	if (avg >= 90) grade = 'A';
//	else if (avg >= 80) grade = 'B';
//	else if (avg >= 70) grade = 'C';
//	else if (avg >= 60) grade = 'D';
//	else grade = 'F';
//	printf("총점 : %d, 평균 : %.1f, 학점 : %c\n", sum, avg, grade);
//
//}

//--------------------------------------------------

int main() {
	double height, weight, bmi;
	printf("키입력 : "); scanf_s("%lf", &height);
	printf("몸무게 입력 : "); scanf_s("%lf", &weight);

	bmi = weight / ((height / 100)*(height / 100));
	printf("bmi 지수 : %.1f\n", bmi);

	if (bmi <= 18.5) printf("살쫌 찌쇼~\n");
	else if (bmi < 25) printf("와우~ 관리 잘하네요..\n");
	else if (bmi < 30) printf("음~ 좀 줄여야 겠어요.\n");
	else printf("심하게 튼튼하네요~\n");
}