#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c) {
    int sum, twicesum, thirdsum;
    sum = a+b+c;
    twicesum = (a * a) + (b*b) + (c*c);
    thirdsum = (a*a*a) + (b*b*b) + (c*c*c);
    if(a != b && a != c && b!=c){
        return sum;
    }
    else if((a == b  && b != c) || (a != b && b == c) || (a == c && a != b)){
        return sum * twicesum;
    }
    else if(a == b && b == c && a==c){
        return sum*twicesum*thirdsum;
    }
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", solution(a, b, c));
    
    return 0;
}