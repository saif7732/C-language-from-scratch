#include <stdio.h>

int main(){

    // Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop.

    int i=1,n;
    printf("1\n2\n3\n4\n.\n.\n.\n.\nn\n");
    printf("enter n:");
    scanf("%d",&n);

    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
    return 0;
}