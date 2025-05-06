#define Quarter 25
#define Dime 10
#define Nickel 5
#define Penny 1
int main()
{
	int num, money;
	int Q, D, N, P;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &money);
		if (money >= 1 && money <= 500)
		{
			Q = money / Quarter;
			D = money % Quarter / Dime;
			N = money % Quarter%Dime / Nickel;
			P = money % Quarter%Dime% Nickel / Penny;
			printf("%d %d %d %d\n", Q, D, N, P);
		}
		else
		{
			printf("False");
			break;
		}
	}
	return 0;
}