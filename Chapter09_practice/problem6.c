#include <stdio.h>

// Create an array of 5 complex numbers created in Problem 5 and display them 
// with the help of a display function. The values must be taken as an input from 
// the user. 

typedef struct c{
    int real;
    int imaginary;
} complex;

void show(complex a, int index);
void show(complex a, int index){
    printf("The complex number %d is %d + %di\n",index, a.real, a.imaginary);
}

int main(){

    complex a1;
    printf("------------Complex number 1-------------\n");
    
    printf("Enter the real part of your number: ");
    scanf("%d", &a1.real);
    printf("Enter the imaginary part of your number: ");
    scanf("%d", &a1.imaginary);
    
    complex a2;
    printf("------------Complex number 2-------------\n");
    
    printf("Enter the real part of your number: ");
    scanf("%d", &a2.real);
    printf("Enter the imaginary part of your number: ");
    scanf("%d", &a2.imaginary);
    
    complex a3;
    printf("------------Complex number 3-------------\n");
    
    printf("Enter the real part of your number: ");
    scanf("%d", &a3.real);
    printf("Enter the imaginary part of your number: ");
    scanf("%d", &a3.imaginary);
    
    complex a4;
    printf("------------Complex number 4-------------\n");
    
    printf("Enter the real part of your number: ");
    scanf("%d", &a4.real);
    printf("Enter the imaginary part of your number: ");
    scanf("%d", &a4.imaginary);
    
    complex a5;
    printf("------------Complex number 5-------------\n");

    printf("Enter the real part of your number: ");
    scanf("%d", &a5.real);
    printf("Enter the imaginary part of your number: ");
    scanf("%d", &a5.imaginary);


    show(a1,1);
    show(a2,2);
    show(a3,3);
    show(a4,4);
    show(a5,5);

   

    return 0;
}