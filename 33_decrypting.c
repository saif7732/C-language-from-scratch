#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encrypt(const char *input, unsigned char *output, const char *key, int len) {
    int keyLen = strlen(key);
    for (int i = 0; i < len; i++) {
        output[i] = input[i] ^ key[i % keyLen];
    }
}

int main() {
    char hexInput[300];
    unsigned char encrypted[100], decrypted[100];
    const char *key = "Creampie#boy$4383pu$$ylicker#pain$kickingboll$";

    printf("Enter encrypted hex values (space-separated):");
    fgets(hexInput, sizeof(hexInput), stdin);

    // Parse hex input into bytes
    int len = 0;
    char *token = strtok(hexInput, " ");
    while (token != NULL && len < sizeof(encrypted)) {
        unsigned int byte;
        sscanf(token, "%x", &byte);
        encrypted[len++] = (unsigned char)byte;
        token = strtok(NULL, " ");
    }

    // Decrypt using XOR
    encrypt((const char *)encrypted, decrypted, key, len);
    decrypted[len] = '\0';

    printf("\nDecrypted string: %s\n\n", decrypted);

    return 0;
}
