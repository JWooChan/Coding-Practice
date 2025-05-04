int main()
{
	char str[100];
	int n;
	int ans = 0;
	scanf("%s %d", str, &n);
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			ans += (str[i] - 55) * pow(n, strlen(str) - i - 1);
		}
		else
		{
			ans += (str[i] - 48) * pow(n, strlen(str) - i - 1);
		}
	}
	printf("%d", ans);
	return 0;
}