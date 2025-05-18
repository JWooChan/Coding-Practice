int main(void)
{
	int x, y, w, h;
	int smallest1 = 0;
	int smallest2 = 0;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	if (x < w - x)
	{
		smallest1 = x;
	}
	else
	{
		smallest1 = w - x;
	}
	if (y < h - y)
	{
		smallest2 = y;
	}
	else
	{
		smallest2 = h - y;
	}
	int result = smallest1 < smallest2 ? smallest1 : smallest2;
	printf("%d", result);
}