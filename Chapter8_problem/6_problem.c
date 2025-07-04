#include <stdio.h>
#include <string.h>

//Write a program to encrypt a string by adding 1 to the ascii value of its 
//characters.

void encrypt(char *str, char *result);

void encrypt(char *str, char *result){
    
    int i, j = 0;
    for (int i = 0; str[i] != '\0'; i++){
        result[j++] = str[i]+1;
    }
    result[j] = '\0';
}

int main(){

    char text[100], result[100];

    printf("\nEnter your text:");
    fgets(text, sizeof(text), stdin);
    size_t pos = strcspn(text, "\n");
    text[pos] = '\0';

    encrypt(text, result);

    printf("\nEncrypted text: %s\n\n", result);

    return 0;
}