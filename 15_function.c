#include <stdio.h>

int sum(int,int); // Function prototype for sum
// This function takes two integers as parameters

int sum(int n,int m){ // Function definition for sum
    // This function calculates the sum of two integers
    
    
    printf("the sum is %d\n",n+m);
    return n+m;
    
    // Function to calculate the sum of two integers
    // and print the result
    // Note: The return type is implicitly int, but it's good practice to specify it.
    // Adding a return type for clarity
    // and maintainability.
    // The function takes two integers as parameters
    // and returns their sum.

}

int main(){
    int a=4,b=5;
    sum(a,b);
    
    // Calling the sum function with two integers
    // and printing the result

    int a1=5,b1=6;
    sum(a1,b1);
    
    // Calling the sum function again with different integers
    // and printing the result

    int a2=7,b2=8;
    sum(a2,b2);
   

    // Calling the sum function again with another set of integers
    // and printing the result

    return 0;
}