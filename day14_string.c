#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*
	���ڿ��� �迭
*/
//int main() {
//	//char stn1[10] = "word ����";
//	//printf("stn1 : %s\n", stn1);
//	//printf("stn1 �ּ� : %d\n", stn1);
//	//// �迭���� �ش�迭�� ���� �ּҰ��� ������ �ִ�.
//	//// ���ڿ� �迭�� ���������� '\0'( NULL ����) �� ������ �־�� �Ѵ�..
//	//// - C���� ���ڿ� ��½� NULL ���� �������� �о�帰��..
//	//// - NULL ���ڴ� ���ڿ��� �������� ǥ���Ѵ�
//
//	//char stn2[5] = "smile";
//	//printf("stn2 : %s\n", stn2);
//	//// ���ڿ��� ���� NULL ���ڰ� ������ ���������� �о�帮�� �ʴ´�..
//
//	//char stn3[6] = "smile";
//	//printf("stn3 : %s\n", stn3);
//
//	//printf("���ڿ� ��½� NULL\0 ������ �о�帰��\n");
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
strcpy() �Լ�
- ���ڿ��� ������ �ִ� �Լ�
- strcpy( ����޴� ����, ������ ���� ����)
  strcpy_s( ����޴� ����, �������ũ��, ������ ���� ���� )
- 'string.h' ������� �ʿ�
*/
//int main() {
//	char stn1[10] = "good";
//	printf("stn1 : %s\n", stn1);
//
//	char stn2[5];
//	//stn2 = "asdf";
//	// strcpy(stn2, stn1); // �⺻ Ÿ��
//	strcpy_s(stn2, sizeof(stn2), stn1);
//	printf("stn2 : %s\n", stn2);
//}


//------------------------------------------------

/*
strlen() �Լ�
- NULL('\0')���� ������ ���ڿ��� ���̸� ��ȯ�ϴ� �Լ�
- strlen( ���ڿ� )
- 'string.h' ������� �ʿ�
*/
//int main() {
//	char stn[20] = "smile ^^";
//	printf("stn ũ�� : %d\n", sizeof(stn));
//	printf("stn ���� : %d\n", strlen(stn));
//	for (int i = 0; i < strlen(stn); i++) {
//		printf("%c", stn[i]);
//	}
//	printf("\n");
//}


//------------------------------------------------

/*
strcmp() �Լ�
- �ΰ��� ���ڿ� ���� �������� Ȯ���ϴ� �Լ�
  - ������ '0'�� ��ȯ�ϰ�, Ʋ���� '-1' or '1' �� ��ȯ�Ѵ�
- strcmp( ���ڿ�1, ���ڿ�2 )
- 'string.h' ������� �ʿ�
*/
//int main() {
//	char same1[10] = "abcd";
//	char same2[8] = "abcf";
//	char same3[20] = "abcd";
//	printf("���ڿ��� ������ : %d\n", strcmp(same1, same2));	// -1
//	printf("���ڿ��� ������ : %d\n", strcmp(same2, same1));	// 1
//	printf("���ڿ��� ������ : %d\n", strcmp(same1, same3));	// 0
//
//	if (strcmp(same1, same3) == 0) { // ( !strcmp(same1, same3)) {
//		printf("���ڿ��� ����\n");
//	}
//	else {
//		printf("���ڿ��� Ʋ����\n");
//	}
//}


//------------------------------------------------

/*
������( ���� ) �����ϱ�

rand() �Լ�
- 0 ~ 32767 ���̿��� ������ ���� �����ϴ� �Լ�
- rand()
- 'stdlib.h' ������� �ʿ�

srand() �Լ�
- rand() �Լ��� �ʱⰪ�� �������ִ� �Լ�
- srand( �ʱⰪ )
- 'stdlib.h' ������� �ʿ�

time() �Լ�
- 1970 �� 1�� 1�� ���� ��������� �ð��� �ʴ����� ��ȯ�ϴ� �Լ�
- time(NULL)
- 'time.h' ������� �ʿ�
*/
int main() {
	//srand(15);
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 5; i++) {
		int num = rand() % 10 + 1; // rand % ���� + ���۰�;
		printf("%d\n", num);
	}
}


//------------------------------------------------






//------------------------------------------------





//------------------------------------------------
