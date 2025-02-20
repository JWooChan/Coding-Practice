#include <stdio.h>

int main()
{
	int a;
	int b;
	int min = 1000000;
	int max = -1000000;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b);
		if (max < b) max = b;
		if (min > b) min = b;
	}
	printf("%d %d", min, max);
	
}