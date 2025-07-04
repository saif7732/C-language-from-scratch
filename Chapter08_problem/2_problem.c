#include <stdio.h>
#include <string.h>

//Write a program to take string as an input from the user using %c and %s confirm 
//that the strings are equal. 

int main(){

    char name[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("%c\n", name);
    printf("%s\n", name);


    return 0;
}