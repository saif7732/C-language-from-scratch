#include <stdio.h>
#include <math.h>

//Write a function ‘sumVector’ which returns the sum of two vectors passed to it. 
// vectors must be two–dimensional. 

struct vector{
    int i;
    int j;
};

struct vector sumVector(struct vector a, struct vector b);
struct vector sumVector(struct vector a, struct vector b){
    struct vector c;
    c.i= a.i + b.i;
    c.j= a.j + b.j; 
    return c;
}

int main(){

    struct vector a;
    struct vector b;
    struct vector sum;

    printf("Enter the value of i1: ");
    scanf("%d", &a.i);

    printf("Enter the value of j1: ");
    scanf("%d", &a.j);

    printf("Enter the value of i2: ");
    scanf("%d", &b.i);

    printf("Enter the value of j2: ");
    scanf("%d", &b.j);

    sum= sumVector( a ,b);

    printf("The sum of vectors is %di + %dj", sum.i, sum.j);

    return 0;
}