#include <stdio.h>

//Write a program to count the occurrence of a given character in a string. 

int main(){

    char text[100] = "Creampie#boy$4383pu$$ylicker#pain$kickingboll$";
    int count=0;
    char check;

    printf("Enter the character you want to check: ");
    scanf("%c", &check);

    for(int i= 0; text[i] != '\0'; i++){
        if(text[i] == check){
            count++;
        }
    }
    printf("the character has been found %d times in the text", count);

    return 0;
}