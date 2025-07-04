#include <stdio.h>

int main(){

    float income,tax;
    printf("Enter your income in USD:");
    scanf("%f", &income);

    if(income<250000){
        printf("You don't have to pay tax");
    }
    else if(income>=250000 &&income<500000){
        tax=income*0.05;
        printf("The amount of tax you have to pay is:%.2f", tax);
    }
    else if(income>=500000 && income<1000000){
        tax=income*0.2;
        printf("The amount of tax you have to pay is:%.2f", tax);
    }
    else {
        tax=income*0.3;
        printf("The amount of tax you have to pay is:%.2f",tax);
    }

    return 0;
}