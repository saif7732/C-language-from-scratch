#include <stdio.h>
#include <string.h>

void string_copy(char str2[], char str1[]);
void string_copy(char str2[], char str1[]){
    int i, j=0;
    for (int i=0; str1[i] != '\0'; i++){
        str2[j++] = str1[i];
    }
    str2[j] = '\0';
}

int main(){

    char name1[50], name2[50];

    printf("enter name1:");

    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';

    string_copy(name2, name1);

    printf("name 1 is: %s\n", name1);
    printf("name 2 is: %s\n", name2);

    return 0;
}