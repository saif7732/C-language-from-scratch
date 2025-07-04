#include <stdio.h>
#include <string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main(){

    struct student EEE1 = { "Saiful Haque Saif",1007, 3.5};

    printf("the name of student 1: %s\n", EEE1.name);
    printf("the roll of student 1: %d\n", EEE1.roll);
    printf("the cgpa of student 1: %.2f\n", EEE1.cgpa);

    return 0;
} 