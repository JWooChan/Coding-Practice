#include <stdio.h>

void Digital_clock(int h, int m, int time)
{
	m += time;
	h += m / 60;
	m %= 60;
	h %= 24;

	printf("%d %d", h, m);
}

int main()
{
	int h, m, time;
	scanf("%d %d\n %d", &h, &m, &time);
	Digital_clock(h, m, time);
	return 0;
}