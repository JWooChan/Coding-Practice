#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, bool flag) {
    if(flag == true){
        return a+b;
    }
    else
        return a-b;
}

int main(){
    int a,b;
    bool flag;
    scanf("%d %d", &a,&b);
    printf("%d", solution(a,b,flag));
    return 0;
}