#include <stdio.h>
#include <stdlib.h>

int num(int A, int B) {
	if (0 < A && A<10 && 0< B && B < 10) {
		return A+B;
	}
	return 0;
}


int main()
{
	int a, b;
	scanf("%d %d\n", &a, &b);
	printf("%d\n", num(a, b));
	return 0;
}