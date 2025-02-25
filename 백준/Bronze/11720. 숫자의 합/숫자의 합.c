#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char a[101];
	int num;
	int sum = 0;
	scanf("%d %s", &num, a);
	for (int i = 0; i < num; i++)
	{
		sum += a[i] - '0'; // 5 - ascii 53, 0 - ascii48
	}
	printf("%d", sum);
	return 0;
}
