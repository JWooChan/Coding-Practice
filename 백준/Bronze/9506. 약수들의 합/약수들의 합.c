int main()
{
	int num;

	while (1)
	{
        int sum = 0;
	    int i = 0;
		scanf("%d", &num);
		if (num == -1) break;

		for (int i = 1; i < num; i++)
		{
			if (num % i == 0)
			{
				// printf("%d", i); // 약수
				sum += i;
			}
		}
		if (sum == num)
		{
			printf("%d = 1", num);
			for (i = 2; i < num; i++)
			{
				if (num % i == 0)
				{
					printf(" + %d", i);
				}
			}
			printf("\n");
		}
		else
		{
			printf("%d is NOT perfect.\n", num);
		}
	}
	return 0;
}