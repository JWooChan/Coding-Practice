int main()
{
	int n;
	char str[50] = { 0, };
	scanf("%d", &n);
	if (n >= 1 && n <= 1000)
	{
		for (int i = 1; i <= n; i++)
		{
			scanf("%s", str);
			if (strlen(str) >= 1 && strlen(str) <= 20)
			{
				for (int j = 0; j < strlen(str); j++)
				{
					if (str[j] >= '0'&& str[j] <= '9');
					else if (str[j] >= 'a' && str[j] <= 'z');
					else if (str[j] >= 'A' && str[j] <= 'Z');
					else
						break;
				}
				if (strlen(str) <= 9 && strlen(str) >= 6)
				{
					printf("yes\n");
				}
				else
					printf("no\n");

			}
		}
		return 0;
	}
	return 0;
}