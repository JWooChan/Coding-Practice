int main()
{
	int n, k;
	int count = 0;
	int i = 0;
	scanf("%d %d", &n, &k);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
		if (count == k) break;
	}
	if (i <= n)
	{
		printf("%d", i);
	}
	else
	{
		printf("0");
	}
}