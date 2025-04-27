int main()
{
	int arr;
	int max = 0;
	int row = 0;
	int column = 0;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			scanf("%d", &arr);
			if (max <= arr)
			{
				max = arr;
				row = i;
				column = j;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d\n", row, column);
	return 0;
}