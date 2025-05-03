int main()
{
	int n, x, y;
	int count = 0;
	int arr[100][100] = { 0, }; //0으로 채워진 2차원 배열
	scanf("%d", &n); //색종이 개수 입력
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y); //색종이 시작 점 입력
		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				arr[j][k] = 1; // 10x10 영역을 1로 표시(겹치는 부분 포함)
			}
		}
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr[i][j] == 1)
			{
				count++; // 입력한 색종이 위치에 대해 '1'을 넣어준 다음 그 부분을 count하면 된다.
			}
		}
	}
	printf("%d\n", count);
	return 0;
}