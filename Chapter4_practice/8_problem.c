#include <stdio.h>

int main(){

  //  8. Write a program to calculate the factorial of a given number using a for loop.

    int n,i,product=1;

    printf("Enter the value of n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

      product=product*i;

    }
    printf("The factorial of %d is %d",n,product);
    
    return 0;
}