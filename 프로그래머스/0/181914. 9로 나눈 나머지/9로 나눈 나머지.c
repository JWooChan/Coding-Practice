#include <stdio.h>
#include <string.h>

int solution(const char* number) {
    int sum = 0;
    
    // 문자열의 각 자리 숫자를 더함
    for (int i = 0; number[i] != '\0'; i++) {
        sum += number[i] - '0'; // 문자 '0'을 빼서 숫자로 변환
    }
    
    return sum % 9;
}

int main() {
    char number[100001]; // 최대 길이 100,000까지 입력 가능
    
    // 사용자 입력 받기
    scanf("%100000s", number);
    
    // 결과 출력
    printf("%d\n", solution(number));
    
    return 0;
}
