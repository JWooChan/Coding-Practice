#define MAX 100
int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);

	int A[MAX][MAX];
	int B[MAX][MAX];


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int sum = A[i][j] + B[i][j];
			printf("%d ", sum);
		}
		printf("\n");
	}

	return 0;
}