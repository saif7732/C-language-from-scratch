#include <stdio.h>

int main(){
       
    /*Write a program to 
    print multiplication table of 
    a given number n.*/

    int n,product;
    
    printf("Enter your number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        product=i*n;
        printf("%d x %d = %d\n", n,i,product);
    }

    return 0;
}