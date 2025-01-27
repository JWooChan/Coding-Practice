#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numLog_len은 배열 numLog의 길이입니다.
char* solution(int numLog[], size_t numLog_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char * result=(char *)malloc(numLog_len * sizeof(char));
    for(int i=1; i<numLog_len;i++){
        if(numLog[i] - numLog[i-1]==1){
            result[i-1] = 'w';
        }
        else if(numLog[i] - numLog[i-1] == -1){
            result[i-1] = 's';
        }
        else if(numLog[i] - numLog[i-1]==10){
            result[i-1] = 'd';
        }
        else if(numLog[i] - numLog[i-1]==-10){
            result[i-1]='a';
        }
    }
     result[numLog_len - 1] = '\0';
    return result;
}

int main(){
    int numLog[256];
    int numLog_len = sizeof(numLog)/sizeof(numLog[0]);
    scanf("%d", numLog);
    printf("%s", solution(numLog, numLog_len));
    return 0;
}