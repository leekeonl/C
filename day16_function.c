#include <stdio.h>
#include <Windows.h>
/*
�Լ� ( function )
- �������� ����� �����ϴ� ���� ���α׷�
*/

//// �Լ� ����
//// - �����Ϸ����� � �Լ��� �ִٰ� �˷��ִ°�
////   - main �Լ� ���� ��ġ�Ѵ�
//// ��ȯŸ��  �Լ��̸�(�Ű����� Ÿ��);
//int Func(int n); 
//int main() {
//	int n = 10;
//	// �Լ� ȣ��
//	// - ��������ִ� �Լ��� ����ϱ� �θ��� ��
//	// - �Լ��̸� : ����Ϸ��� ����� ���ǵ� �Լ��̸�
//	//   ���ڰ� : ����Ϸ��� �Լ��� ����� �����ϱ� ���� �Է��ϴ� ��( O, X )
//	//			 - �Լ��� ���� �� ���� ������ ����θ� �ȴ�.
//	// �Լ��̸�( ���ڰ� )
//	n = Func(n);
//	printf("n : %d\n", n);
//}
////�Լ� ����
////- ��ȯŸ�� : �Լ� ������ ����� �Ŀ� ȣ��η� ���ư��� �������� ���� �ڷ���( O, X )
////            ��ȯ���� ������ 'void' �� �����Ѵ�
////- �Լ��̸� : �Լ��� ȣ���Ҷ� ��� �� �̸�
////            �Լ��̸��� �Լ��� ���� �� ��ɰ� ������ �ְ� �����ش�
////- �Ű����� : ȣ��ο��� ���޹��� ���� �޾Ƽ� �Լ����� ����� ������ �ʱⰪ( O, X )
////			ȣ��ο��� ���ڰ��� ������ �������� �ΰų� 'void' �� �Է��Ѵ�
////- return : �Լ� ������ ������� ȣ��η� �ǵ��� �� �� ���
////            ��ȯ�Ǵ� ���� ������ ����д�..
//
//// ��ȯŸ��   �Լ��̸�( �Ű����� ){
//int Func(int n) {
//	n++;
//	return n;
//}

//------------------------------------------------------------

int IntegerIn();
int Add(int n);
void Result(int n);
void Line();
void End();
void Error();
int Menu();
int main() {
	int n;
	while (1) {
		system("cls"); // �ܼ�â�� ��µ� ���� �����
		int sel = Menu();
		switch (sel) {
		case 1: // �Է�
			n = IntegerIn(); 
			printf("�Է� �� : %d\n", n);
			Sleep(2000); // 1/1000�� ������ ���α׷��� ������ ������Ű�� �Լ�
			break;
		case 2: // ���
			n = Add(n);
			Result(n);
			system("pause"); // ���α׷��� ������ �Ͻ�������Ű�� �Լ�
			break;
		case 3:
			End();
		default:
			Error();
			Sleep(2000);
		}
	}
	//Line();


	//int val;
	////printf("���� �Է� : "); scanf_s("%d", &n);
	//val = IntegerIn();
	//printf("�Է� �� : %d\n", val);
}
void Error(){ printf("�Է� ����"); }
void End() {
	printf("���α׷� ����\n");
	exit(0); // ���α׷� ���� ����
}
int Menu() {
	int sel;
	printf("�׽�Ʈ ���α׷�\n");
	printf("1. �Է�\n");
	printf("2. ���\n");
	printf("3. ����\n");
	Line();
	printf("���� :: "); scanf_s("%d", &sel);
	return sel;
}
void Line() {
	printf("---------------------\n");
}
void Result(int n) {
	printf("����� : %d\n", n);
	Line();
}
int Add(int n) {
	int select;
	printf("����(1.+1  2.+10  3.+100) :: "); scanf_s("%d", &select);
	switch (select) {
	case 1:
		n += 1; break;
	case 2:
		n += 10; break;
	case 3:
		n += 100; break;
	}
	return n;
}
int IntegerIn() {
	int n;
	printf("���� �Է� : "); scanf_s("%d", &n);
	return n;
}
