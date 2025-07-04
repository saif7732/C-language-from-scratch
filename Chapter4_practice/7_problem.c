#include <stdio.h>

int main(){

//Write a program to calculate the sum of the numbers occurring in the
//multiplication table of 8. (consider 8 x 1 to 8 x 10).

    int n,sum=0,product;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        
        product=i*n;
        sum=product+sum;
        printf("%d x %d = %d\n", n,i,product);

    }

    printf("The sum of all product is:%d",sum);

    return 0;
}