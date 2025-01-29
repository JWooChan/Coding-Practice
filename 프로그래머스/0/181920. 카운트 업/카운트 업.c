#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start_num, int end_num) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int size = end_num-start_num +1;
    int* answer = (int*)malloc(size * sizeof(int));
    for(int i=0; i<size; i++){
        answer[i]=start_num+i;
        if(start_num>end_num){
        return 0;
        }
    }
    return answer;
}

int main(){
    int start_num, end_num;
    scanf("%d %d", &start_num, &end_num);
    printf("%d", solution(start_num, end_num));
    return 0;
}