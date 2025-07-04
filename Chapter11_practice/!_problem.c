#include <stdio.h>
#include <stdlib.h>

//Write a program to dynamically create an array of size 6 capable of storing 6 
//integers.

int main(){

    int n = 6;
    int *ptr = (int*)calloc(n, sizeof(int));

    for(int i = 0; i < n; i++){

        printf("Enter the value of ptr[%d]", i);
        scanf("%d", &ptr[i]);
    }

    return 0;
}