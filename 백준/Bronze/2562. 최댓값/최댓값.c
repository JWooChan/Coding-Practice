#include <stdio.h>

int main()
{
	int a=0;
	int arr[101];
	int num = 2;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
		if (a < arr[i])
		{
			a = arr[i];
			num = i;
		}
	}
	printf("%d\n%d", a, num+1);
    return 0;
}