#include <stdio.h>
//int main() {
//	//int size = 5;
//	//int arr[size]; error : 배열의 크기값은 변수로 설정 할 수 없고, 상수만 가능하다..
//	int ar[3];
//	//ar = { 1, 2, 3 }; error :  배열안의 데이터를 한번에 여러개 수정하는 건 선언과 동시에만 가능하다..
//	int ar2[3] = { 1, 2, 3 };
//	int ar3[] = { 10, 20, 30};
//	// 배열 공간갯수 구하기
//	printf("ar3 의 크기 : %d\n", sizeof(ar3));
//	printf("ar3 의 공간 하나 크기 : %d\n", sizeof(ar[1]));
//	int ar3size = sizeof(ar3) / sizeof(ar3[0]);
//	printf("ar3 공간 갯수 : %d\n", ar3size);
//	// 배열은 초기화할 데이터와 갯수가 정해져 있으면 선언시에 공간의 크기를 지정하지 않아도,
//	// 초기화 할 데이터 수만큼 자동으로 공간을 생성한다..
//	//printf("ar3[0] : %d\n", ar3[0]);
//	//printf("ar3[1] : %d\n", ar3[1]);
//	//printf("ar3[2] : %d\n", ar3[2]);
//	//printf("ar3[3] : %d\n", ar3[3]);
//	//printf("ar3[4] : %d\n", ar3[4]);
//	int index = 1;
//	printf("ar3[1] : %d, %d\n", ar3[1], ar3[index]);
//	// 배열의 공간에 개별적으로 접근 할 때에는 인덱스 번호를 사용한다..
//	// 배열명[인덱스번호]; => 인덱스 번호로 변수 사용 가능
//	
//	// 배열 전체에 공간에 한번에 접근 할 때에는 for문을 사용한다..
//	//for (int i = 0; i < 5; i++) {
//	for( int i = 0 ; i<ar3size ; i++ ){
//		printf("ar3[%d] : %d\n", i, ar3[i]);
//	}
//}

//int main() {
//	int ar[4] = { 11, 3, 44, 5 };
//	int sum = 0;
//	for (int i = 0; i < 4; i++) {
//		//printf("%d+", ar[i]);
//		printf("%d", ar[i]);
//		sum += ar[i];
//		if (i != 3) {
//			printf(" + ");
//		}
//	}
//	printf(" = %d\n", sum);
//	//printf("\b = %d\n", sum);
//}























