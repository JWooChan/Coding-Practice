#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str1, const char* str2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int str1len = strlen(str1);
    char* answer = (char*)malloc(str1len*2+1);
    int idx = 0;
    for(int i = 0; i<str1len; i++){
        answer[idx++] = str1[i];
        answer[idx++] = str2[i];
    }
    
    answer[idx] = '\0';
    return answer;
}