#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d", &n);
    int *ptr = (int*)calloc(n, sizeof(int));

    ptr[n];

    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);           //undefined array, calloc will fill them with value 0
    printf("%d\n", ptr[4]);
    printf("%d\n", ptr[5]);
    printf("%d\n", ptr[6]);
   

    return 0;
}