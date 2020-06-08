#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
랜덤값( 난수 ) 생성하기

rand() 함수
- 0 ~ 32767 사이에서 임임의 값을 생성하는 함수
- rand()
- 'stdlib.h' 헤더파일 필요

srand() 함수
- rand() 함수의 초기값을 설정해주는 함수
- srand( 초기값 )
- 'stdlib.h' 헤더파일 필요

time() 함수
- 1970 년 1월 1일 부터 현재까지의 시간을 초단위로 반환하는 함수
- time(NULL)
- 'time.h' 헤더파일 필요
*/
int main() {
	//srand(15);
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 5; i++) {
		int num = rand() % 10 + 1; // rand % 갯수 + 시작값;
		printf("%d\n", num);
	}
}
