#include <stdio.h>

int main(){

    int mark[5] = {45,56,67,78,34};

    for(int i= 0;i<5;i++){
        printf("the mark at index %d is %d\n", i, mark[i]);
    }

    return 0;
}