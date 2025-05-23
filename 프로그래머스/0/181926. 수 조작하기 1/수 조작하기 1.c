#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(int n, const char* control) {
    int control_len = strlen(control);
    for(int i=0; i<control_len; i++){
        switch(control[i]){
            case 'w':
            n+=1;
            break;
        case 's':
            n-=1;
            break;
        case 'd':
        n+=10;
        break;
        case 'a':
        n-=10;
        break;
                default:
                break;
    }
    }
    return n;
}

int main(){
    int n;
    char control[256];
    
    scanf("%d", &n);
    scanf("%s", control);
    printf("%d", solution(n, control));
    
    //free(control);
    return 0;
}