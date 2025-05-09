int main()
{
	int floor = 1;
	int num;
	int last_num = 1;
	scanf("%d", &num);

	while (num > last_num)
	{
		last_num += (6*(floor));
		floor++;
	}

	printf("%d", floor);
	return 0;
}