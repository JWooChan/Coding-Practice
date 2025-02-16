#include <stdio.h>

int main()
{
	int A, B, C;
	int one, two, three, four;
	scanf("%d %d %d", &A, &B, &C);
	one = (A + B) % C;
	two = ((A%C) + (B%C)) % C;
	three = (A*B) % C;
	four = ((A%C) * (B%C)) % C;
	
	if (2 <= A && 3000 >= A, 2<=B && B<=10000, 2<=C && C<=10000)
	{
		printf("%d\n", one);
		printf("%d\n", two);
		printf("%d\n", three);
		printf("%d\n", four);
	}
	else
	{
		printf("repress the number\n");
	}
	return 0;
}