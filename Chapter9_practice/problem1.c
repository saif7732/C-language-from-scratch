#include <stdio.h>

//create a two dimentional vector using structure

struct vector{
    int i;
    int j;
};

int main(){

    struct vector v;

    printf("Enter the value of i: ");
    scanf("%d", &v.i);
    printf("Enter the value of j: ");
    scanf("%d", &v.j);

    printf("The value of vector is %di + %dj", v.i, v.j);

    return 0;
}