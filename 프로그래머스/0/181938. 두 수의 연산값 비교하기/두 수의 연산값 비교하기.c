#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int str_a, str_b;
    char arr_a[11], arr_b[11];
    sprintf(arr_a, "%d", a);
    sprintf(arr_b, "%d", b);
    strcat(arr_a, arr_b);
    str_a = atoi(arr_a);
    sprintf(arr_a, "%d", a);
    strcat(arr_b, arr_a);
    str_b = atoi(arr_b);
    if(str_a >= 2*a*b)
    {
        return str_a;
    }
    else
        return 2*a*b;
}