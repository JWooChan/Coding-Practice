#include <stdio.h>

int main()
{
	int input_num[10];
	int result = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &input_num[i]);
		input_num[i] = input_num[i] % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		int count = 0;
		for (int j = 0; j < i; j++)
		{
			if (input_num[i] == input_num[j])
			{
				count++;
			}
		}
		if (count == 0) {
			result++;
		}
	}
	printf("%d", result);
	return 0;
}