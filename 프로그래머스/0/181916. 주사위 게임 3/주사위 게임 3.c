#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c, int d) {
    int count[7] = {0}; // 1~6의 빈도수를 저장하는 배열
    int numbers[4] = {a, b, c, d}; // 입력값 배열 저장

    // 주사위 숫자의 빈도수 저장
    for (int i = 0; i < 4; i++) {
        count[numbers[i]]++;
    }

    int p = 0, q = 0, r = 0, min_value = 7;

    // 등장한 숫자를 찾기
    for (int i = 1; i <= 6; i++) {
        if (count[i] == 4) return 1111 * i; // 네 개가 같으면 바로 반환
        if (count[i] == 3) p = i; // 세 개가 같은 숫자 저장
        if (count[i] == 2) { 
            if (p == 0) p = i; // 첫 번째 두 개 같은 숫자 저장
            else q = i; // 두 번째 두 개 같은 숫자 저장
        }
        if (count[i] == 1) { // 1번 등장한 숫자들 저장
            if (q == 0) q = i;
            else r = i;
        }
        if (count[i] > 0 && i < min_value) min_value = i; // 최소값 저장
    }

    // 3개 같은 경우
    if (p > 0 && q > 0 && count[p] == 3) {
        return (10 * p + q) * (10 * p + q);
    }

    // 2개씩 같은 경우
    if (p > 0 && q > 0 && count[p] == 2 && count[q] == 2) {
        return (p + q) * abs(p - q);
    }

    // 2개가 같고 나머지가 다른 경우
    if (p > 0 && q > 0 && r > 0) {
        return q * r;
    }

    // 네 개가 모두 다를 경우 (가장 작은 값 반환)
    return min_value;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", solution(a, b, c, d));
    return 0;
}