#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], int num_list_len) {
    int *result = (int *)malloc((num_list_len + 1) * sizeof(int));
    
    for(int i=0; i<num_list_len;i++){
        result[i]=num_list[i];
    }
    
    if(num_list[num_list_len-1]>num_list[num_list_len-2]){
        result[num_list_len]=num_list[num_list_len - 1] - num_list[num_list_len-2];}
    else{
        result[num_list_len]= num_list[num_list_len-1]*2;
    }
    return result;
}

int main(){
    int num_list_len;
    scanf("%d", &num_list_len);
    int num_list[num_list_len];
    
    printf("%d", solution(num_list,num_list_len));
    return 0;
}
