int main(void)
{
	int x1, x2, x3, y1, y2, y3, x4, y4;
	int x, y;
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

	if (x1 == x2)
	{
		x4 = x3;
		printf("%d ", x4);
	}
	else if (x1 == x3)
	{
		x4 = x2;
		printf("%d ", x4);
	}
	else if(x2==x3)
	{
		x4 = x1;
		printf("%d ", x4);
	}

	if (y1 == y2)
	{
		y4 = y3;
		printf("%d", y4);
	}
	else if (y1 == y3)
	{
		y4 = y2;
		printf("%d", y4);

	}
	else if(y2==y3)
	{
		y4 = y1;
		printf("%d", y4);
	}
	return 0;
}