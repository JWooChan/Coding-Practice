int main()
{
	int fa1, fa0;
	int c, n0;
	scanf("%d %d", &fa1, &fa0);
	scanf("%d %d", &c, &n0);
	if (c >= 1 && c <= 100)
	{
		if (n0 >= 1 && n0 <= 100)
		{
			if ((fa1 * n0 + fa0) <= (c * n0) && c>=fa1)
			{
				printf("1");
			}
			else
				printf("0");
		}
	}
	return 0;
}