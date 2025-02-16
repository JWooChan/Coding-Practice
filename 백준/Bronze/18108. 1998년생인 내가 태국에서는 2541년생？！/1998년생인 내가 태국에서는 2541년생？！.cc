#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d",&y);
	if (1000 <= y && 3000 >= y)
	{
		x = y - 543;
		printf("%d", x);
	}
	else
	{
		printf("repress the number\n");
	}
	return 0;
}