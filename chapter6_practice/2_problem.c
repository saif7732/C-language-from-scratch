#include <stdio.h>

//Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
//a function and print its address. Are these addresses same? Why?

void print(int*);

void print(int* i){
    printf("the address of variable i in print function is %p\n",(void*) i);
}

int main(){

    int i=5;
    int* j=&i;
    printf("the address of i is %p\n",(void*) &i);
    print(j);

    return 0;
}