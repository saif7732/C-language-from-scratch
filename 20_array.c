#include <stdio.h>

int main(){

    int student[100];

    student[0] = 96;
    student[1] = 80;
    student[2] = 89;

    printf("the mark of student 0 is %d\n", student[0]);


    printf("enter the mark of student[5]:");
    scanf("%d", &student[5]);
    printf("the mark of student[5] is %d\n", student[5]);

    return 0;
}