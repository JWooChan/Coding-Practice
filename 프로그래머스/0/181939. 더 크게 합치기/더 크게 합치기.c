#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int str_a, str_b;   // 조합된 숫자를 저장할 변수
    char arr_a[11], arr_b[11]; // 문자열을 조작하기 위한 배열
    sprintf(arr_a, "%d", a);
    sprintf(arr_b, "%d", b);    // 정수를 문자열로 변경
    strcat(arr_a,arr_b);    // 문자열 연결 이건 정수가 아닌 문자열형태이다.
    str_a = atoi(arr_a);    // 문자열 형태를 정수로 다시 변경
    sprintf(arr_a, "%d", a);    // arr_a를 다시 초기화하여 a 문자열로 복원
    strcat(arr_b, arr_a);   // 이번에는 b뒤에 a를 이어 붙임.
    str_b = atoi(arr_b); // arr_b 문자열을 정수로 변환해서 str_b에 저장
    return str_a>str_b ? str_a:str_b;
    
}