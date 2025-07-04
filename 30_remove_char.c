#include <stdio.h>

void remove_char(char *str, char ch) {
    int i, j = 0;
    for (i = 0; str[i]; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}


int main(){

    char name[100];

    printf("enter the name:");
    fgets(name, sizeof(name), stdin);
    remove_char(name, ' ');
    printf("%s", name);

    return 0;
}