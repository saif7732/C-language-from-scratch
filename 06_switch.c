#include <stdio.h>

int main() {

    int a;
    printf("choose any number from 1 to 5:");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Have a good day");
        break;
    case 2:
        printf("May God bless you");
        break;
    case 3:
        printf("You have a good heart");
        break;
    case 4:
        printf("You are gay");
        break;
    case 5:
        printf("You will get a good wife");
        break;
    
    default:
        printf("You choose nothing");
        break;
    }

    return 0;
}