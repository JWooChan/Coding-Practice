#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char num1[5];
	char num2[5];
	char temp1;
	char temp2;
	scanf("%s %s", num1, num2);
	
	temp1 = num1[2];
	num1[2] = num1[0];
	num1[0] = temp1;

	temp2 = num2[2];
	num2[2] = num2[0];
	num2[0] = temp2;

	if (strcmp(num1, num2) > 0)
	{
		printf("%s", num1);
	}
	else
	{
		printf("%s", num2);
	}
}