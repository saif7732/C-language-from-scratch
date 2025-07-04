#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){

    struct student EEE[100];
    struct student* ptr= &EEE[0];
    // EEE[0].roll;
    // EEE[0].cgpa;
    // EEE[0].name;


    printf("Enter the name of EEE student 1: ");
    fgets(EEE[0].name, sizeof(EEE[0]), stdin);
    EEE[0].name[strcspn(EEE[0].name, "\n")] = '\0';

    printf("Enter the roll of EEE student 1: ");
    scanf("%d", &EEE[0].roll);

    printf("Enter the cgpa of EEE student 1: ");
    scanf("%f", &EEE[0].cgpa);

    printf("\n");
    
    
    getchar();
    
    printf("Enter the name of EEE student 2: ");
    fgets(EEE[1].name, sizeof(EEE[1]), stdin);
    EEE[1].name[strcspn(EEE[1].name, "\n")] = '\1';

    printf("Enter the roll of EEE student 2: ");
    scanf("%d", &EEE[1].roll);

    printf("Enter the cgpa of EEE student 2: ");
    scanf("%f", &EEE[1].cgpa);

    printf("\n");


    printf("the name of student 1: %s\n", ptr->name);
    printf("the roll of student 1: %d\n", ptr->roll);
    printf("the cgpa of student 1: %.2f\n", EEE[0].cgpa);
    
    printf("---------------------------\n");

    printf("the name of student 2: %s\n", EEE[1].name);
    printf("the roll of student 2: %d\n", EEE[1].roll);
    printf("the cgpa of student 2: %.2f\n", EEE[1].cgpa);

    return 0;
}