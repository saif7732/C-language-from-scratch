#include <stdio.h>
#include <string.h>

int main(){

    char name[50];

    printf("enter your name:");

    fgets(name, sizeof(name), stdin);
    size_t remove = strcspn(name, "\n");
    name[remove] = '\0';
    
    int count = 0;

    for(size_t i = 0; i<strlen(name); i++){
        if(name[i] != ' '){
            count++;
        }
    }

    printf("the length of your name is %d", count);



    return 0;
}