#include <stdio.h>
#include <string.h>

void slice(char str[], int a , int b, char result[]);

void slice(char str[], int a , int b, char result[]){
   int i, j=0;

   for (int i=a;  i<b && str[i]!= '\0'; i++){
        result[j++] = str[i];
   }
   result[j] = '\0';
}

int main(){

    int a,b;
    char name[50], sliced[50];

    printf("enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("from where to where you want to cut the string? a= ");
    scanf("%d", &a);
    printf("from where to where you want to cut the string? b= ");
    scanf("%d", &b);

    slice(name, a,b, sliced);
    printf("%s", sliced);

    return 0;
}