#include <stdio.h>
#include <stdlib.h>
void Func() {
	int n;
	n = 10;
}
int* MemorySet() {
	int *p = (int*)malloc(sizeof(int));
	*p = 10;
	return p;
}
int main() {

	Func();
	int*p = MemorySet();
	printf("*p : %d\n", *p);

	free(p);
}