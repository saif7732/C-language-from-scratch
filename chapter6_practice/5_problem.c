#include <stdio.h>

float* sum(float, float);
float* avg(float, float);

float* sum(float a, float b){

    float s=a+b;
    float* ptr1=&s;
    printf("the sum of a and b is %.2f\n", s);
    return ptr1;
    
}

float* avg(float a, float b){

    float avg=(a+b)/2;
    float* ptr2=&avg;
    printf("the average of a and b is %.2f\n", avg);
    return ptr2;

}


int main(){

    float a,b;
    float* ptr1;
    float* ptr2;

    printf("enter the value of a:");
    scanf("%f",&a);
    printf("enter the value of b:");
    scanf("%f", &b);

    ptr1 = sum(a,b);

    ptr2 = avg(a,b);

    printf("the address of sum is %p and the address of avg is %p", ptr1, ptr2);

    return 0;
}