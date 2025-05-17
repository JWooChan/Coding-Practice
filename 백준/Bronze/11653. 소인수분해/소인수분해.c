int main(void)
{
	int divide_num;
	scanf("%d", &divide_num);
	for (int i = 2;i<= divide_num; i++)
	{
		if (divide_num % i == 0)
		{
			printf("%d\n", i);
			divide_num /= i;
			i = 1;
		}
	}
	return 0;
}