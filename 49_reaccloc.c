#include <stdio.h>
#include <stdlib.h>

int main(){

    int n =5; // You can change this to any value or take input from the user

    scanf("%d", &n);
    int *ptr = (int*)calloc(n, sizeof(int));

    realloc(ptr, 10 * sizeof(int)); // Reallocate memory to hold 10 integers


    return 0;
}