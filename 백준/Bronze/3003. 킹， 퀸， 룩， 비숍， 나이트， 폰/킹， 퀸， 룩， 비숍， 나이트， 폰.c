#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int chess[7] = { 1,1,2,2,2,8 };
	int input[7] = { 0 };
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &input[i]);
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", chess[i] - input[i]);
	}
	return 0;
}