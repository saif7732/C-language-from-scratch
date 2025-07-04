#include <stdio.h>

int main(){

    // 5. Write a program to sum first ten natural numbers using while loop.

    int i=1,sum=0;
    while(i<=10){
        sum=i+sum;
        i++;
    }
    printf("the sum of first ten natural number is :%d\n",sum);

    return 0;
}