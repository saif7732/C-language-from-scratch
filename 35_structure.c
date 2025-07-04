#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
   
    struct student s1;

    printf("Enter student 1 name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0';

    printf("Enter student 1 roll: ");
    scanf("%d", &s1.roll);

    printf("Enter student 1 cgpa: ");
    scanf("%f", &s1.cgpa);

    printf("###################\n");
    

    struct student s2;
    
    printf("Enter student 2 name: ");
    getchar();
    fgets(s2.name, sizeof(s2.name), stdin);
    s2.name[strcspn(s2.name, "\n")] = '\0';
    
    printf("Enter student 2 roll: ");
    scanf("%d", &s2.roll);
    
    printf("Enter student 2 cgpa: ");
    scanf("%f", &s2.cgpa);

    printf("###################\n");


    struct student s3;
   
    printf("Enter student 3 name: ");
    getchar();
    fgets(s3.name, sizeof(s3.name), stdin);
    s3.name[strcspn(s3.name, "\n")] = '\0';
    
    printf("Enter student 3 roll: ");
    scanf("%d", &s3.roll);
    
    printf("Enter student 3 cgpa: ");
    scanf("%f", &s3.cgpa);
    
    printf("###################\n");
    
    
    printf("name: %s\n", s1.name);
    printf("roll: %d\n", s1.roll);
    printf("cgpa: %.2f\n", s1.cgpa);

    printf("------------------\n");
    
    printf("name: %s\n", s2.name);
    printf("roll: %d\n", s2.roll);
    printf("cgpa: %.2f\n", s2.cgpa);
    
    printf("------------------\n");

    printf("name: %s\n", s3.name);
    printf("roll: %d\n", s3.roll);
    printf("cgpa: %.2f\n", s3.cgpa);


    return 0;
}
