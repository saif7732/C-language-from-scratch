#include <stdio.h>

int main(){

    int mark[5];

    for(int i = 0; i < 5; i++){
        printf("enter the index %d mark:", i);
        scanf("%d", &mark[i]);
    }

    printf("\n\n");

    for(int i = 0; i < 5; i++){
        printf("the mark at index %d is %d\n", i, mark[i]);
    }

    return 0;
}