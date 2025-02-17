#include <stdio.h>
int axis(int x, int y)
{
	if (x > 0 && y > 0)
	{
		return 1;
	}
	else if (x < 0 && y>0)
	{
		return 2;
	}
	else if (x < 0 && y < 0) {
		return 3;
	}
	else
	{
		return 4;
	}
}

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", axis(x, y));
	return 0;
}