#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// included_len은 배열 included의 길이입니다.
int solution(int a, int d, bool included[], size_t included_len) {
    int sum = 0;
    for (size_t i = 0; i < included_len; i++) {
        if (included[i]) {
            sum += a + (int)i * d;  // 등차수열의 n항 계산: a + (n-1) * d
        }
    }
    return sum;
}

int main(){
    int a, d;
    bool included;
    size_t included_len;
    scanf("%d %d", &a, &d);
    printf("%d", solution(a, d, included, included_len));
}