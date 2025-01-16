#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int num_list[], int num_list_len) {
    int sum = 0;
    int mul = 1;
    for(int i=0; i<num_list_len; i++){
        sum += num_list[i];
        mul *= num_list[i];
    }
    int sum2 = sum * sum;
    if(mul<sum2){
        return 1;
    }
    else if(mul>sum2)
        return 0;
}

int main()
{
    int num_list[] = {1, 2}; // num_list 최소 길이
    int num_list_len = sizeof(num_list) / sizeof num_list[0];
    int result = solution(num_list, num_list_len);
    printf("%d", result);
    
    return 0;
}