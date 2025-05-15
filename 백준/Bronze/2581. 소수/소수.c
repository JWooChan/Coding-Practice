int main()
{
	int n, m;
	int smallest = 0;
	int sum = 0;
	int divide_num = 0;
	int count = 0;

	scanf("%d %d", &n, &m);

    for (int i = n; i <= m; i++)
	{
		divide_num = 0;
		for (int j = 1; j <= i ; j++)
		{
			if ((i % j) == 0)
			{
				divide_num = divide_num + 1;
			}
		}

		if (divide_num == 2)
		{
			count++;
			//printf("%d : 소수 발견!\n", i);
			//소수를 찾음
			sum = sum + i;

			if (count == 1)
			{
				smallest = i;
			}
		}
		divide_num = 0;
	}

	if (count == 0)
	{
		printf("-1");
	}
	else
	{
		printf("%d\n%d", sum, smallest);
	}
}