#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char arr[1000];
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%s", arr);
		printf("%c%c\n", arr[0], arr[strlen(arr)-1]);
	}
	
	return 0;
}
