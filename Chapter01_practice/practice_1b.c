#include <stdio.h>

int main() {



    float height,length,Area;
    
    printf("Enter the height of the rectangle:");
    scanf("%f",&height);

    printf("Enter the length of the rectangle:");
    scanf("%f",&length);

    Area=height*length;

    printf("the area of your rectangle is %.2f", Area);


    return 0;
}