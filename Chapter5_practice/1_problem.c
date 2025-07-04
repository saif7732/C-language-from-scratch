#include <stdio.h>

//Write a program using function to find average of three numbers.

float avg(float,float, float);

float avg(float a, float b, float c){

    printf("the averae of the threee numbers is %.2f\n", ((a+b+c)/3));
    return ((a+b+c)/3);
    
}


int main(){

    float a,b,c;
    printf("enter your three numbers:");
    scanf("%f %f %f", &a,&b,&c);
    avg(a,b,c);


    return 0;
}