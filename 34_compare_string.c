#include <stdio.h>
#include <string.h>

int main() {
    char password1[100], password2[100];

    printf("Enter your password: ");
    fgets(password1, sizeof(password1), stdin);
    password1[strcspn(password1, "\n")] = '\0';

    while (1) {
        printf("Enter your password again: ");
        fgets(password2, sizeof(password2), stdin);
        password2[strcspn(password2, "\n")] = '\0';

        int check = strcmp(password1, password2);
        if (check == 0) {
            printf("Your password is okay!!!\n");
            break;
        } else {
            printf("Passwords don't match. Try again.\n");
        }
    }

    return 0;
}
