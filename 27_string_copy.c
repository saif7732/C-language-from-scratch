#include <stdio.h>
#include <string.h>

int main(){

    char name[50];
    char name2[50];

    printf("enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    strcpy(name2, name);

    printf("name 1: %s\nname 2: %s", name, name2);

    return 0;
}