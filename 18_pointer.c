#include <stdio.h>

int main(){

    // int i = 5;
    // int* j = &i;      //j here store the address of i

    // printf("the address of variable i is %p\n", &i);

    // printf("the value at address &i is %d\n", *j);   //both are samee
    // printf("the value at address &i is %d\n", *(&i));

    // printf("the address of poointer variable j is %p\n", &j);





    char a='H';
    char* b= &a;

    printf("the address of a is %p\n", &a);
    printf("the value at address &a is %c\n", *b);
    printf("the value at address &a is %c\n", *(&a));



    return 0;
}