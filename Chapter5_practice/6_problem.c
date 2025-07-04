#include <stdio.h>

//6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.

int sum_of_natural_numbers(int);

int sum_of_natural_numbers(int n){
    return (n*(n+1))/2;
}

int main(){

    int n;
    printf("Enter the last number of your series:");
    scanf("%d",&n);
    printf("The sum of first %dth number is %d",n,sum_of_natural_numbers(n));

    return 0;
}