#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
