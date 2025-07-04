#include <stdio.h>
#include <math.h>

//Write a function ‘sumVector’ which returns the sum of two vectors passed to it. 
// vectors must be two–dimensional. 

int sumVector(int i, int j);
int sumVector(int i, int j){
    float value;
    value = sqrt(i*i+j*j);
    return value;
}
struct vector{
    int i;
    int j;
};

int main(){

    struct vector v;
    float value;

    printf("Enter the value of i: ");
    scanf("%d", &v.i);

    printf("Enter the value of j: ");
    scanf("%d", &v.j);

    value= sumVector(v.i,v.j);

    printf("The value of vector is %.2f", value);

    return 0;
}