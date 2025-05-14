int main()
{
	int total, num;
	int count=0;
	scanf("%d", &total);
	for (int i = 1; i <= total; i++)
	{
		scanf("%d", &num);
		for (int j = 2; j <= num;j++)
		{
			if (num == j)
			{
				count++;
			}
			if (num % j == 0) break;
		}
	}
	printf("%d", count);
	return 0;
}