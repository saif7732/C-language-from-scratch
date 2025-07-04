#include <stdio.h>
#include <string.h>

void decrypt(char *str, char *result);

void decrypt(char *str, char *result){
    
    int i, j = 0;
    for (int i = 0; str[i] != '\0'; i++){
        result[j++] = str[i]-1;
    }
    result[j] = '\0';
}

int main(){

    char name[100], result[100];

    printf("\nEnter your encrypted text:");
    fgets(name, sizeof(name), stdin);
    size_t pos = strcspn(name, "\n");
    name[pos] = '\0';

    decrypt(name, result);

    printf("\nDecrypted text: %s\n\n", result);

    return 0;
}