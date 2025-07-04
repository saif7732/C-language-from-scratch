#include <stdio.h>
#include <string.h>

typedef struct employee{
    char name[100];
    int salary;
} emp;

int main(){

    int n;
    printf("How many employee: ");
    scanf("%d", &n);
    getchar();

    FILE *fp = fopen("problem_4_emp.txt", "w");

    emp emp[n];

    for(int i = 0; i<n; i++){

        printf("Enter the name of employee %d: ", i+1);
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0';
    
        printf("Enter the salary of employee %d: ", i+1);
        scanf("%d", &emp[i].salary);
        getchar();


        fprintf(fp, "%d. %s, %d\n",i+1, emp[i].name, emp[i].salary);
    }

    fclose(fp);

    return 0;
}