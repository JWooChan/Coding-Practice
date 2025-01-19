#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], int num_list_len) {
    char odd_str[11] = ""; // 홀수를 저장할 문자열
    char even_str[11] = ""; // 짝수를 저장할 문자열

    for (int i = 0; i < num_list_len; i++) {
        if (num_list[i] % 2 == 0) {
            // 짝수라면 even_str에 추가
            char temp[2];
              sprintf(temp, "%d", num_list[i]);
          strcat(even_str, temp);
        } else {
            // 홀수라면 odd_str에 추가
            char temp[2];
            sprintf(temp, "%d", num_list[i]);
            strcat(odd_str, temp);
        }
    }

    // 문자열을 정수로 변환
    int odd_num = atoi(odd_str);
    int even_num = atoi(even_str);

    return odd_num + even_num; // 홀수와 짝수의 합 반환
}

int main() {
    int num_list[10], num_list_len;
    
    scanf("%d", &num_list_len);
    printf("Result: %d\n", solution(num_list, num_list_len));
    return 0;
}