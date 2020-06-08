#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*
	문자열과 배열
*/
//int main() {
//	//char stn1[10] = "word 문자";
//	//printf("stn1 : %s\n", stn1);
//	//printf("stn1 주소 : %d\n", stn1);
//	//// 배열명은 해당배열의 시작 주소값을 가지고 있다.
//	//// 문자열 배열의 마지막에는 '\0'( NULL 문자) 들어갈 공간이 있어야 한다..
//	//// - C언어는 문자열 출력시 NULL 문자 전까지를 읽어드린다..
//	//// - NULL 문자는 문자열의 끝지점을 표기한다
//
//	//char stn2[5] = "smile";
//	//printf("stn2 : %s\n", stn2);
//	//// 문자열의 끝에 NULL 문자가 없으면 정상적으로 읽어드리지 않는다..
//
//	//char stn3[6] = "smile";
//	//printf("stn3 : %s\n", stn3);
//
//	//printf("문자열 출력시 NULL\0 까지를 읽어드린다\n");
//
//	//char stn4[20] = "Good luck ^^";
//	//int i = 0;
//	//while (stn4[i] != '\0') {
//	//	printf("%c", stn4[i]);
//	//	i++;
//	//}
//	//printf("\n i : %d\n",i);
//
//	//stn4[3] = '\0';
//	//printf("stn4 : %s\n", stn4);
//	//for (int i = 0; i < 12; i++) {
//	//	printf("%c", stn4[i]);
//	//}
//	//printf("\n");
//
//}

//------------------------------------------------

/*
strcpy() 함수
- 문자열을 복사해 주는 함수
- strcpy( 복사받는 공간, 복사할 값의 공간)
  strcpy_s( 복사받는 공간, 복사허용크기, 복사할 값의 공간 )
- 'string.h' 헤더파일 필요
*/
//int main() {
//	char stn1[10] = "good";
//	printf("stn1 : %s\n", stn1);
//
//	char stn2[5];
//	//stn2 = "asdf";
//	// strcpy(stn2, stn1); // 기본 타입
//	strcpy_s(stn2, sizeof(stn2), stn1);
//	printf("stn2 : %s\n", stn2);
//}


//------------------------------------------------

/*
strlen() 함수
- NULL('\0')문자 제외한 문자열의 길이를 반환하는 함수
- strlen( 문자열 )
- 'string.h' 헤더파일 필요
*/
//int main() {
//	char stn[20] = "smile ^^";
//	printf("stn 크기 : %d\n", sizeof(stn));
//	printf("stn 길이 : %d\n", strlen(stn));
//	for (int i = 0; i < strlen(stn); i++) {
//		printf("%c", stn[i]);
//	}
//	printf("\n");
//}


//------------------------------------------------

/*
strcmp() 함수
- 두개의 문자열 값이 같은지를 확인하는 함수
  - 같으면 '0'을 반환하고, 틀리면 '-1' or '1' 을 반환한다
- strcmp( 문자열1, 문자열2 )
- 'string.h' 헤더파일 필요
*/
//int main() {
//	char same1[10] = "abcd";
//	char same2[8] = "abcf";
//	char same3[20] = "abcd";
//	printf("문자열이 같은가 : %d\n", strcmp(same1, same2));	// -1
//	printf("문자열이 같은가 : %d\n", strcmp(same2, same1));	// 1
//	printf("문자열이 같은가 : %d\n", strcmp(same1, same3));	// 0
//
//	if (strcmp(same1, same3) == 0) { // ( !strcmp(same1, same3)) {
//		printf("문자열이 같다\n");
//	}
//	else {
//		printf("문자열이 틀려요\n");
//	}
//}


//------------------------------------------------

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


//------------------------------------------------






//------------------------------------------------





//------------------------------------------------
