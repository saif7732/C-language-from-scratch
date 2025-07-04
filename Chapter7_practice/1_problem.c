#include <stdio.h>

// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points 
// to the third element where ptr is a pointer pointing to the first element of the 
// array.

int main(){

    int array[10] = {1,2,3,4,5,6,7,8,9,0};
    int* ptr = &array[0];

    printf("the value ar array[0} is %d\n", *ptr);
    printf("the value ar array[2] is %d\n", *(ptr+2));
    

    return 0;
}