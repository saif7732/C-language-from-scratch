#include <stdio.h>
#include <stdlib.h>

//Write a program to create an array of size n using calloc where n is an 
//integer entered by the user.

int main(){

    int n;
    scanf("%d", &n);
    int *ptr = (int*)calloc(n, sizeof(int)); // Allocate memory for n integers

    //ptr[n]; // This line is not necessary and should be removed.

    for(int i = 0; i<n; i++){
        printf("Enter the value of ptr[%d]: ", i);
        scanf("%d", &ptr[i]);
    }
    printf("\n"); 
    for(int i = 0; i<n; i++){
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    free(ptr); // Free the allocated memory
    ptr = NULL; // Set pointer to NULL after freeing

    printf("value of ptr %d", ptr[2]);


    return 0;
}