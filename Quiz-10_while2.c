#include <stdio.h>
int main() {
	int row, col;

	//// *****
	//// *****
	//// *****
	//// *****
	//// *****
	//row = 0;
	//while (row < 5) {
	//	col = 0;
	//	while (col < 5) {
	//		printf("*");
	//		++col;
	//	}
	//	printf("\n");
	//	++row;
	//}
	//printf("\n");

	//// *****
	//// ****
	//// ***
	//// **
	//// *
	//row = 0;
	//while (row < 5) {
	//	col = 0;
	//	while (col < 5 - row) {
	//		printf("*");
	//		++col;
	//	}
	//	printf("\n");
	//	++row;
	//}
	//printf("\n");

	//-----------------------------------------------

	//// OOOOO*
	//// OOOOO*
	//// OOOOO*
	//// OOOOO*
	//// OOOOO*
	//row = 0;
	//while (row < 5) {
	//	col = 0;
	//	while (col < 5) {
	//		printf("O");
	//		++col;
	//	}
	//	printf("*\n");
	//	++row;
	//}
	//
	//printf("\n");

	//// *
	//// O*
	//// OO*
	//// OOO*
	//// OOOO*
	//row = 0;
	//while (row < 5) {
	//	col = 0;
	//	while (col < row) {
	//		printf("O");
	//		++col;
	//	}
	//	printf("*\n");
	//	++row;
	//}

	//------------------------------------------------

	//사용자에게 5개의 정수를 입력 받아서, 합을 출력하는 프로그램을 작성해보자.
	//단, 입력 받은 수는 무조건 1이상이어야 한다.
	//만약 1미만의 수가 입력되면 이를 입력으로 인정하지 않고 재 입력을 요구한다.
	//그래서 결국 1이상의 정수 5개를 모두 입력 받을 수 있도록 작성해보자.
	int n, i, sum = 0;
	i = 0;
	while (i < 5) {
		printf("%d번째 입력 : ", i + 1);  scanf_s("%d", &n);
		if (n > 0) {
			sum += n;
			i++;
		}
		else {
			printf("입력 오류~ 재입력 하세요..\n");
		}
	}
	printf("총합 : %d\n", sum);

}