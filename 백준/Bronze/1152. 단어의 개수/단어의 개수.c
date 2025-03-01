int main()
{
	char input[1000000];
	int count = 0;
	int len;
	scanf("%[^\n]", input);
	len = strlen(input);

	if (len == 1)
	{
		if (input[0] == ' ')
        {
			printf("0\n");
			return 0;
		}
	}

	for (int i = 1; i < len-1; i++)
	{
		if (input[i] == ' ')
		{
			count++;
		}
	}
	printf("%d\n", count+1);
	return 0;
}