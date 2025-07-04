#include <stdio.h>

//Write a program with a structure representing a complex number.

typedef struct c{
    int real;
    int imaginary;
} complex;

int main(){

    complex a;

    printf("Enter the real part of your number: ");
    scanf("%d", &a.real);

    printf("Enter the imaginary part of your number: ");
    scanf("%d", &a.imaginary);

    printf("Complex number a: %d + %di", a.real, a.imaginary);

    return 0;
}