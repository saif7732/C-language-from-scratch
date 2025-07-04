#include <stdio.h>
#include <string.h>

typedef struct student{
    char name[100];
    int roll;
    float cgpa;
} std;

int main(){

    std s1;
    std* ptr1 = &s1;
    // s1.name;
    // s1.roll;
    // s1.cgpa;

    printf("Enter the name of student 1: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0';

    printf("Enter the roll of student 1: ");
    scanf("%d", &s1.roll);

    printf("Enter the CGPA of student 1: ");
    scanf("%f", &s1.cgpa);

    printf("-----------------------\n");

    printf("\n\t-----Details of student 1-----\n\n");

    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %.2f\n", s1.cgpa);

    printf("\n\t-----using pointer-----\n\n");

    printf("Name: %s\n",ptr1-> name);
    printf("Roll: %d\n", ptr1->roll);
    printf("CGPA: %.2f\n", ptr1->cgpa);

    return 0;
}