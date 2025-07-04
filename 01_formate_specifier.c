#include <stdio.h>

int main(){

    int integer;
    float floating_number;
    char c;
    double d;

    printf("Enter your integer:");
    scanf("%d", &integer);

    printf("Enter your floating point number:");
    scanf("%f", &floating_number);

    printf("Enter your character:");
    scanf(" %c", &c);
    
    printf("Enter your double number:");
    scanf("%lf", &d);

    // a space is required before %c 

    printf("the integer is %d\n", integer);
    printf("the floating number is %f\n", floating_number);
    printf("the character is %c\n", c);
    printf("the double number is %.14lf\n", d);

    return 0;
}