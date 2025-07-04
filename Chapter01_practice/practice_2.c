#include <stdio.h>

int main() {
    // Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and height.

    float pie=3.1416, radius,area;

    printf("Enter the value of radius in meter:");
    scanf("%f",&radius);

    area=pie*radius*radius;

    printf("the area of your circle is %f",area);

    return 0;
}