#include <stdio.h>

void reverse(int number[], int);

void reverse(int number[], int max){
    
    int size;
    for(int i=0; i<6; i++){
        printf("%d   ",number[max--]);
    }
}

int main(){

    int number[6];
    int size=6;

    for(int i = 0; i<6; i++){
    printf("enter the value for number[%d]:", i);
    scanf("%d", &number[i]);
    }

    reverse(number, 5);

    return 0;
}