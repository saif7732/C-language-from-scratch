#include <stdio.h>

int main() {
    
//     Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest.

// Band	            Taxable income	             Tax rate
// Personal         Up to £12,570	                0%
// Basic rate	    £12,571 to £50,270	            20%
// Higher rate  	£50,271 to £125,140	            40%
// Additional   	over £125,140	                45%

    float income, tax;
    printf("Enter your income in pound:");
    scanf("%f",&income);
    if (income<=12570)
    {
        tax=0;
        printf("the tax is %.2f\n",tax);
        printf("tax rate is 0%%");
    }

    else if (income > 12570 && income <= 50720)
    {
        tax=income*0.2;
        printf("the tax is %.2f\n",tax);
        printf("tax rate is 20%%");
    }

    else if (income>50270 && income<=125140)
    {
        tax=income*0.4;
        printf("the tax is %.2f\n",tax);
        printf("tax rate is 40%%");
    }

    else {
        tax=income*0.45;
        printf("the tax is %.2f\n",tax);
        printf("tax rate is 45%%");
    }
    
    
    

    return 0;
}