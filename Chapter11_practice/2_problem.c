//Use the array in problem 1 to store 6 integers entered by the user
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 6;
    int *ptr = (int*)calloc(n, sizeof(int));

    for(int i = 0; i < n; i++){

        printf("Enter the value of ptr[%d]", i);
        scanf("%d", &ptr[i]);
    }

    for(int i = 0; i < n; i++){
        printf("Value at ptr[%d] = %d\n", i, ptr[i]);
    }

    return 0;
}