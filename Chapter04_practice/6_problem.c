#include <stdio.h>

int main(){

    // 5. Write a program to sum first ten natural numbers using while loop.
    
    int i=1,sum=0;
    
    // do{
    //     sum=i+sum;
    //     i++;
    // }
    // while(i<=10);

    for(i=1;i<=10;i++){
        sum+=i;
    }

    
    printf("the sum of first ten natural number is :%d\n",sum);
    return 0;
}