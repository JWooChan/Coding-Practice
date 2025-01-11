#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n) {
    int sum;
    sum = 0;
    if(n % 2 != 0){
        for(int i = 1; i <= n; i+=2){
            sum += i;
            
        }
    }
    else{
        for(int i = 2; i<= n; i+=2){
            sum += i * i;
            
        }
    }
    return sum;
}

int main()
{
    int n, sum;
    scanf("%d", &n);
    printf("%d", solution(n));
    
    return 0;
}