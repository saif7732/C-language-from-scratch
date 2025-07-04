#include <stdio.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

void show(struct student EEE);

void show(struct student EEE){
    printf("the name of EEE1 student is: %s\nthe roll of EEE1 student is: %d\nthe cgpa of EEE1 student is: %.2f\n --------------------------------\n", EEE.name, EEE.roll, EEE.cgpa);
}

int main(){

    struct student EEE1 = {"Md. Saiful Haque Saif", 1007, 3.5};
    struct student EEE2 = {"Ahsan Malik Naim", 1008, 3.6};
    struct student EEE3 = {"Shawon Debnath", 1062, 3.8};
    struct student EEE4 = {"Washim Hussain", 1080, 3.4};

    show(EEE1);
    show(EEE2);
    show(EEE3);
    show(EEE4);


    return 0;
}