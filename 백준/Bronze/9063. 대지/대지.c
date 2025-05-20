int main(void)
{
	int n, x, y;
	int total = 0;
	scanf("%d", &n);
	int minx = 10001, miny = 10001;
	int maxx = -10001, maxy = -10001;
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		if (x >= maxx)
			maxx = x;
		if (y >= maxy)
			maxy = y;
		if (x < minx)
			minx = x;
		if (y < miny)
			miny = y;
	}
	total = ((maxx - minx) * (maxy - miny));
	printf("%d", total);
	return 0;
}