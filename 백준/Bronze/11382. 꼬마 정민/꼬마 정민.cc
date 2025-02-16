#include <stdio.h>

long long sum(long long a, long long b, long long c)
{
	return a + b + c;
}

int main()
{
	long long a, b, c;

	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld\n", sum(a, b, c));
	
	return 0;
}