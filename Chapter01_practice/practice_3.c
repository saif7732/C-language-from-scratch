#include <stdio.h>

int main() {
    
/*Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
formula:(0°C × 9/5) + 32*/

float celcius,farenheit;
printf("Enter the temperature in celcius:");
scanf("%f",&celcius);

farenheit=(celcius*9/5)+32;
printf("the temperature in farenheit is %.2f",farenheit);

    return 0;
}