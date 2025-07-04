#include <stdio.h>
#include <string.h>

void strlen1(char str[]);   //function prototype

void strlen1(char str[]){   //function definition

    int count= 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != '\0' && str[i] != ' '){
            count++;
        }
    }

    printf("the length is: %d", count);

}

int main(){

    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    size_t pos = strcspn(name, "\n");
    name[pos] = '\0';

    strlen1(name);

    return 0;
}