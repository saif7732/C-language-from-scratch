#include <stdio.h>
#include <stdlib.h>

int main(){

    //Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to 
    //make it store 15 number (from 7 x 1 to 7 x 15)

    int m = 7, n = 10;
    int *ptr = (int*)malloc(n* sizeof(int));

    printf("Multiplication table of 7 upto 10: \n");
    for(int i= 0; i<n; i++){
        printf("%d x %d = %d\n", m, i+1, m*(i+1));
    }

    ptr = (int*)realloc(ptr, 15*sizeof(int));

    printf("Extended table of 7 upto 15: \n");
    for(int i= 10; i<15; i++){
        printf("%d x %d = %d\n", m, i+1, m*(i+1));
    }

    return 0;
}