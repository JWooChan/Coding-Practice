#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int R, T;
	char S[20];
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %s", &R, S);
		for (int j = 0; j < strlen(S); j++)
		{
			for (int k = 0; k < R; k++)
			{
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
}