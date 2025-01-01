#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    int size = sizeof(s1)/sizeof(s1[0]);
    for(int i=0; i<size; i++)
    {
        if(s1[i] != '\0'){
            printf("%c\n",s1[i]);
        }
        else
            break;        
    }
   
    return 0;
}
