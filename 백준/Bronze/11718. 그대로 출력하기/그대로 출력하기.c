#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[101];
	while (scanf("%[^\n]s", input) != EOF)
	{
		printf("%s\n", input);
		getchar();
	}
	return 0;
}