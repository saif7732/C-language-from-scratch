#include <stdio.h>
#include <string.h>

int main(){

    char first_name[50], last_name[50], full_name[100];

        printf("Enter your first name: ", first_name);
        fgets(first_name, sizeof(first_name), stdin);
        first_name[strcspn(first_name, "\n")] = '\0';

        printf("Enter your last name: ", last_name);
        fgets(last_name, sizeof(last_name), stdin);
        last_name[strcspn(last_name, "\n")] = '\0';

        strcpy(full_name, first_name);
        strcat(full_name, " ");
        strcat(full_name, last_name);

        printf("Full name: %s", full_name);


    return 0;
}