#include <stdio.h>
#include <string.h>

int main(){

    char sentence[] = "C is a powerfull language";
    char *token = strtok(sentence , " ");

    for(int i = 0; token != 0 && i<5 ; i++) {
        
        printf("Word %d: %s\n", i+1, token);
        token = strtok(NULL, " ");
    }

    return 0;
}




