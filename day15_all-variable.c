#include <stdio.h>
#define LINEFEED printf("\n")
/*
��������
- �Լ� �ۿ� ����� ����
- ���������� main �Լ��� ���صǱ� ���� �޷θ��� �����Ǹ�,
  ���α׷��� �޸𸮿��� �Ҹ�ȴ�..
- ������������ ���ϴ� �̸��� �����ְ� ����ϴ°� ����

��������
- �Լ� �ȿ� ����� ����
- ���������� �Լ��� ȣ��Ǿ� �۵��Ҷ� �޸𸮿��� Ȱ��ȭ�ǰ�,
  �Լ��� ����Ǹ� �Ҹ�ȴ�..
  - �Լ��� ����ɶ� ���� ���� ���� �ȴ�.
- �Լ��� ����� �Ű������� �������� �̴�.
*/

int all = 1;

void Func();
int main() {
	printf("all �� : %d, �ּ� : %d\n", all, &all);

	int mVal = 10;
	printf("mVal �� : %d, �ּ� : %d\n", mVal, &mVal);

	int val = 100;
	printf("main val �� : %d, �ּ� : %d\n", val, &val);
	LINEFEED;

	for (int i = 0; i < 3; i++) {
		int val = 1000;
		printf("for val �� : %d, �ּ� : %d\n", val, &val);
		Func();
	}
	LINEFEED;

	printf("all �� : %d, �ּ� : %d\n", all, &all);
	printf("main val �� : %d, �ּ� : %d\n", val, &val);
}
void Func() {
	printf("func �Լ� ����\n");
	all += 1;
	int val = 1;
	printf("func val �� : %d, �ּ� : %d\n", val, &val);
}