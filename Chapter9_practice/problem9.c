#include <stdio.h>

// Write a structure capable of storing date. Write a function to compare those
// dates.

typedef struct date
{
    int dd;
    int mm;
    int yyyy;
} date;

int compare(date a1, date a2);
int compare(date a1, date a2)
{

    int check;
    if (a1.dd == a2.dd && a1.mm == a2.mm && a1.yyyy == a2.yyyy)
    {
        check = 1;
    }
    else
    {
        check = 0;
    }
}

int main()
{

    date a[5];
    int check;
    
    printf("Enter the day of date 1: ");
    scanf("%d", &a[0].dd);
    printf("Enter the day of month 1: ");
    scanf("%d", &a[0].mm);
    printf("Enter the day of year 1: ");
    scanf("%d", &a[0].yyyy);

    printf("Enter the day of date 2: ");
    scanf("%d", &a[1].dd);
    printf("Enter the day of month 2: ");
    scanf("%d", &a[1].mm);
    printf("Enter the day of year 2: ");
    scanf("%d", &a[1].yyyy);

    compare(a[1], a[2]);

    if(check){
        printf("two dates are same");
    }
    else{
        printf("dates are not same");
    }
    
    return 0;
}