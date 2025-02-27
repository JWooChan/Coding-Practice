#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char input_string[101];
	int arr[26];
	scanf("%s", input_string);

	for (int i = 0; i < 26; i++) // 소문자 개수와 초기값 지정
	{
		arr[i] = -1;
	}

	for (int i = 97; i < 123; i++)
	{
		for (int j = 0; j < strlen(input_string); j++)
		{
			if (input_string[j] == i)
			{
				arr[input_string[j] - 'a'] = j;
				break;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}