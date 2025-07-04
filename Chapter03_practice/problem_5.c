#include <stdio.h>

int main(){

    char ch;
    printf("Enter your alphabet:");
    scanf("%c",&ch);

    if(ch>=97 && ch<=122){
        printf("YOu have entered lowercase %c", ch);
    }
    else{
        printf("You have typed \"%c\" and it's not lowercase letter ", ch);
    }

    return 0;
}