#include <stdio.h>
#include <string.h>

void encrypt(const char *input, unsigned char *output, const char *key, int len) {
    int keyLen = strlen(key);
    for (int i = 0; i < len; i++) {
        output[i] = input[i] ^ key[i % keyLen];
    }
}

int main() {
    char text[100];
    unsigned char encrypted[100];
    unsigned char decrypted[100];
    const char *key = "Creampie#boy$4383pu$$ylicker#pain$kickingboll$";

    printf("\nEnter your text: ");
    fgets(text, sizeof(text), stdin);
    size_t inputLen = strcspn(text, "\n");
    text[inputLen] = '\0';

    // Encrypt (binary-safe)
    encrypt(text, encrypted, key, inputLen);

    // Print encrypted as hex
    printf("\nEncrypted string (in hex): ");
    for (size_t i = 0; i < inputLen; i++) {
        printf("%02X ", encrypted[i]);
    }
    printf("\n");

    // // Decrypt (same function)
    // encrypt((const char *)encrypted, decrypted, key, inputLen);
    // decrypted[inputLen] = '\0';  // Null-terminate after decrypting

    // printf("\nDecrypted string: %s\n\n", decrypted);

    return 0;
}
