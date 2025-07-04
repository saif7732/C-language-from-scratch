#include <stdio.h>

int factorial (int); // Function prototype for factorial

int factorial(int n) {
    // Function to calculate the factorial of a number using recursion
   
    if (n == 0 || n == 1) {
        return 1;            // Base case: factorial of 0 or 1 is 1
    } 
    
    else {
        return n * factorial(n - 1);       // Recursive case: n * factorial of (n-1)
    }
}

int main(){

    int n;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n); // Read user input for the number

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    
    else {
        int result = factorial(n); // Call the factorial function
        printf("The factorial of %d is %d\n", n, result); // Print the result
    }

    

    return 0;
}