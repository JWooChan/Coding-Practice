int main()
{
	int num, sum = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		sum += num*num;
	}
	printf("%d", sum % 10);

	return 0;
}