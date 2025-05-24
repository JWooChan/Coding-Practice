int main()
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	// a, b, c 의 큰 숫자를 구분하고 정렬하기
	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;

	// 최대 변의 길이 제외한 합
	int sum = a + b + c - max;

	if (max < sum)
	{
		printf("%d\n", a + b + c);
	}
	else
	{
		int max_length = sum - 1;
		int re_sum = sum + max_length;
		printf("%d\n", re_sum);
	}
	return 0;
}