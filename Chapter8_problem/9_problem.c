#include <stdio.h>

//Write a program to check whether a given character is present in a string or not. 

int main(){

    char text[] = "Creampie#boy$4383pu$$ylicker#pain$kickingboll$";
    char check;
    int present=0;


    printf("enter your character: ");
    scanf("%c", &check);

    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] == check){
            present = 1;
            break;
        }
    }

    if(present){
        printf("the number or character is present in the text");
    }
    else{
        printf("the number or character isn't present in the text");
    }

    return 0;
}