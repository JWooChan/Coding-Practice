#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int sum = num1+num2;
    return sum;
}

int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    printf("%d", solution(a, b));
    
    return 0;
}