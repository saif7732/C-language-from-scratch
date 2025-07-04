#include <stdio.h>

//7. Write a program using function to print the following pattern (first n lines)


int main(){

    int n;
    printf("How many row of stars do you want?:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");

    }


    return 0;
}