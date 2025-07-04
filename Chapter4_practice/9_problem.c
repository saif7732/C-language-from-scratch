#include <stdio.h>

int main(){

  //  8. Write a program to calculate the factorial of a given number using a while loop.

    int n,i=1,product=1;

    printf("Enter the value of n:");
    scanf("%d",&n);

    while(i<=n){

        product=product*i;
        i++;

    }
    printf("The factorial of %d is %d",n,product);
    
    return 0;
}