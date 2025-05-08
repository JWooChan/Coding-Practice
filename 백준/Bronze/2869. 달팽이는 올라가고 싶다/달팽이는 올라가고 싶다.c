int main()
{
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);

	int day = (v - b) / (a - b);
	if ((v - b) % (a - b) != 0)
		day++; // 나머지가 있을 경우 하루 추가

	printf("%d\n", day);
	return 0;
}