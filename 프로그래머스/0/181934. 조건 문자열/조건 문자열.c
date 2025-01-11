#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* ineq, const char* eq, int n, int m) {
    // ">=" 또는 "<=" 조건 처리
    if (eq[0]== '=') {
        if (ineq[0] == '>') {
            return n >= m ? 1 : 0;
        } else if (ineq[0] == '<') {
            return n <= m ? 1 : 0;
        }
    }
    // ">" 또는 "<" 조건 처리
    else if (eq[0] == '!') {
        if (ineq[0] == '>') {
            return n > m ? 1 : 0;
        } else if (ineq[0] == '<') {
            return n < m ? 1 : 0;
        }
    }
    // 조건에 해당하지 않는 경우 (이론적으로 발생하지 않음)
    return 0;
}

int main() {
    const char* ineq;
    const char* eq;
    int n;
    int m;
    scanf("%d %d", &n,&m);

    printf("%d\n", solution(ineq, eq, n, m));
    return 0;
}