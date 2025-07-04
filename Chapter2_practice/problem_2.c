#include <stdio.h>

int main(){

    //Write a program to check whether a number is divisible by 97 or not.

    int a;
    printf("enter your number:");
    scanf("%d",&a);
    if (a%97==0)
    {
        printf("the number is divisible by 97");
    }
    else
    {
        printf("the number is not divisible by 97");
    }
    
    

    return 0;
}