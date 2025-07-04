#include <stdio.h>

int main(){

    int mark[10] = {1,2,3,4,5,6,7,8,9,0};
    int* ptr = &mark[0];

    printf("the address of array[0] is %u\n", ptr);
    ptr++;
    printf("the address of array[0] is now %u", ptr);

    return 0;
}