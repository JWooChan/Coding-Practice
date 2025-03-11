int main()
{
	char a[101];
	int output = 1;
	scanf("%s", a);
	int len = strlen(a);

	for (int i = 0; i < len / 2; i++)
	{
		if (a[i] != a[len - 1 - i])
		{
			output = 0;
			break;
		}
	}
	printf("%d", output);
	return 0;
}
