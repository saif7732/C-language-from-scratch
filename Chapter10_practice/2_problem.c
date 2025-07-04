#include <stdio.h>

//Write a program to generate multiplication table of a given number in text 
//format. Make sure that the file is readable and well formatted

int main(){

    int n;

    printf("Multiplication table of: ");
    scanf("%d", &n);

    FILE *fp;
    fp = fopen("problem_2.txt", "a");

    fprintf(fp, "-------Multiplication table of %d-------\n", n);

    for(int i = 1; i<=10; i++){
        fprintf(fp, "%d x %d = %d\n", n, i, n*i);
    }

    fprintf(fp, "\n");

    fclose(fp);

    return 0;
}