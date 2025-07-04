#include <stdio.h>

//Write a function to convert Celsius temperature into Fahrenheit.

float celsius_to_fahrenheit(float);

float celsius_to_fahrenheit(float celsius){

    float Fahrenheit=(celsius*9/5)+32;
    return (celsius * 9/5)+32;
    
}

int main(){
    
    float celsius;
    
    printf("enter the temperature in celsius:");
    scanf("%f", &celsius);
    
    printf("the temperature in fahrenheit is %.2f\n", celsius_to_fahrenheit(celsius));
    
    return 0;
}