#include <stdio.h>
#include <math.h>

int main()
{

    // 10. Write a program to check whether a given number is prime or not using loops.

    int prime=1, n;
    printf("Enter the value of n:");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 && n != 2)
        {
            prime = 0;
            break;
        }

    }

    if (prime)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }

    return 0;
}