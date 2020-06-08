#include <stdio.h>
#define AR_SIZE 10
#define PI 3.141592
#define SQUARE(N) N*N
#define CIRCLE(R) SQUARE(R)*PI
#define P printf
#define START int main()
#define AGE_MAX 120
/*
매크로( macro )
- 컴파일에 앞서 미리 정의되어 있는 자료로 단순 치환하는 것
- 프로그램 작성시 자주 사용되는 함수, 수식, 상수를 이들을 대표하는 이름을 붙여서 사용하는 것
- 전처리에 해당한다..
*/
//int main() {
START{
	printf("%d\n", 10);
	printf("가로, 세로 5의 넓이 : %d\n", SQUARE(5));
	printf("반지름 2인 원의 넓이 : %.2f\n", CIRCLE(2));
	//int size = 5;
	//int ar[size];
	int ar[AR_SIZE];
	for (int i = 0; i < AR_SIZE; i++) {
		ar[i] = (i + 1) * 10;
	}
	for (int i = 0; i < AR_SIZE; i++) {
		P("ar[%d] : %d\n", i, ar[i]);
	}

}