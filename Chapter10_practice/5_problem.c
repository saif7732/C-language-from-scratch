#include <stdio.h>

int main(){

    int num;
    FILE *fp;
    fp = fopen("problem_5.txt", "r");

    fscanf(fp, "%d", &num);

    fclose(fp);

    int num_double = num * 2;

    fp = fopen("problem_5.txt", "w");

    fprintf(fp, "%d", num_double);

    return 0;
}