#include <stdio.h>

int fibonacci(int);

int fibonacci(int n) {  
    
    if(n < 0) {

        printf("Please enter a non-negative integer.\n");
        return -1;

    }
    
    if(n==0){    
        return 0;
    }
    else if(n==1){
        return 1;
    }  
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }

}

int main(){

    int n;

    printf("enter the position of the fibonacci nunber you want to find:");
    scanf("%d",  &n);

   
    if(fibonacci(n) == -1) {

        return 1;

    }

    printf("the %dth fibonacci number is %d\n", n, fibonacci(n));

    return 0;
}