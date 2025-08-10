#include <stdio.h>

int main(){

    int n;
    printf("enter the value of n:");
    scanf("%d", &n);

    for ( int i = 0; i<n; i++){

        printf("%d. Hello Mr.\n", i);
       
    }

    return 0;
}