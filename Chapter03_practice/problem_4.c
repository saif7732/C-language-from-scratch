#include <stdio.h>

int main(){

    int year;
    printf("Enter the year:");
    scanf("%d", &year);

    if (year%4==0 && year%100!=0 || year%400==0) {
        printf("The year you typed is leap year");
    }
    else {
        printf("The year you typed is not leap year" );
    }

    return 0;
}