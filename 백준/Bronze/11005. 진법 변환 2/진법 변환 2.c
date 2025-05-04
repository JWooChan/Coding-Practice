int main()
{
	int ten_input, n;
	int remain;
	int num = 0;
	char result[100];
	scanf("%d %d", &ten_input, &n);

	// 0 예외 처리
	if (ten_input == 0) {
		printf("0");
		return 0;
	}
	while (ten_input > 0)
	{
		remain = ten_input % n;
		if (remain < 10)
		{
			result[num++] = remain + '0';
		}
		else
		{
			result[num++] = remain + 55;
		}
		ten_input = ten_input / n;
	}
	// 문자열 종료 문자
	result[num] = '\0';

	// 역순 출력
	for (int i = num - 1; i >= 0; i--)
	{
		printf("%c", result[i]);
	}
}