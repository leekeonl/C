#include <stdio.h>
#include <string.h>
#define STU_SIZE 3
//typedef struct test {
//	int data1;
//	char stn[20];
//}test;
//
//int main() {
//	test t = { 10, "word" };
//	printf("초기값 data1 : %d, stn : %s\n", t.data1, t.stn);
//
//	test *pt = &t;
//	(*pt).data1 = 1000;
//	strcpy_s(pt->stn, sizeof(pt->stn), "변경");
//	printf("수정된 값 data1 : %d, stn : %s\n", pt->data1, pt->stn);
//}

//-------------------------------------------------

//typedef struct unit {
//	char name[20];
//	int lv;
//}Unit;
//
//int main() {
//	Unit chrac[3];
//	Unit *pch = chrac;
//	for (int i = 0; i < 3; i++) {
//		printf("%d 번째 캐릭터 입력\n", i + 1);
//		printf("이름 입력 : "); scanf_s("%s", (*(pch + i)).name, sizeof((pch + i)->name));
//		printf("레벨 설정 : "); scanf_s("%d", &pch[i].lv);
//	}
//	for (int i = 0; i < 3; i++) {
//		printf("%s캐릭터 레벨 : %d\n", pch[i].name, pch[i].lv);
//	}
//}

//*****************************************************************************

//typedef struct academy {
//	char name[20];
//	int clang;
//	int java;
//	int sum;
//}Academy;
//
//Academy Total(Academy f) {
//	f.sum = f.clang + f.java;
//	return f;
//}
//void Line() {
//	printf("----------------------------------\n");
//}
//void Info(Academy f) {
//	printf("%s의 점수결과\n", f.name);
//	printf("C언어 : %d, Java : %d, 총점 : %d\n", f.clang, f.java, f.sum);
//}
//void PointSum(Academy *el) {
//	el->sum = (*el).clang + el->java;
//}
//void PointIn(Academy *p) {
//	for (int i = 0; i < STU_SIZE; i++) {
//		printf("%d번 수강생 점수 입력\n", i + 1);
//		printf("이름 입력 : "); scanf_s("%s", p[i].name, sizeof(p[i].name));
//		printf("C언어 점수 입력 : "); scanf_s("%d", &p[i].clang);
//		printf("Java 점수 입력 : "); scanf_s("%d", &p[i].java);
//		PointSum(&p[i]);
//	}
//}
//void PointShow(Academy *p) {
//	for (int i = 0; i < STU_SIZE; i++) {
//		Info(p[i]);
//		Line();
//		//printf("%s 수강생 성적\n", p[i].name);
//		//printf("C언어 : %d, Java : %d, 총점 : %d\n", p[i].clang, p[i].java, p[i].sum);
//	}
//}
//
//int Best(Academy *p) {
//	int bestIdx = 0;
//	for (int i = 1; i < STU_SIZE; i++) {
//		if (p[bestIdx].sum < p[i].sum)
//			bestIdx = i;
//	}
//	return bestIdx;
//}
//int main() {
//	//Academy tong = { "통", 89, 76 };
//	//tong = Total(tong);
//	//Info(tong);
//
//	Academy stu[STU_SIZE];
//	// 입력
//	PointIn(stu);
//	PointShow(stu);
//
//	int bestIdx = Best(stu);
//	Line();
//
//	printf("최고점 학생정보\n");
//	Info(stu[bestIdx]);
//}
