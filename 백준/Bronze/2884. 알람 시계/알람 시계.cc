#include <stdio.h>

void clock(int h, int m)
{

	m -= 45;
	if (m < 0) {
		m += 60;
		h -= 1;
		if (h < 0) {
			h = 23;
		}
	}
	printf("%d %d\n", h, m);
}

int main()
{
	int h, m;
	scanf("%d %d", &h, &m);

	clock(h, m);
	return 0;
}