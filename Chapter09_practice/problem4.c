#include <stdio.h>

//Write a program to illustrate the use of arrow operator → in C

typedef struct student{
    char name[100];
    int roll;
} std;

int main(){

    std s1;
    std* ptr = &s1;

    printf("enter  the roll of student 1: ");
    scanf("%d", &(ptr->roll));
    printf("the roll of student 1 is : %d", ptr->roll);

    return 0;
}