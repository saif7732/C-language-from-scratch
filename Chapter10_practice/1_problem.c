#include <stdio.h>

//Write a program to read three integers from a file.

int main(){

    int a,b,c;
    FILE *fp= fopen("problem_1.txt", "r");
    fscanf(fp, "%d %d %d", &a, &b, &c);
    printf("%d %d %d", a, b, c);

    fclose(fp);

    return 0;
}