#include <stdio.h>

void reverse(int arr[], int i);

void reverse(int number[], int max){

    printf("\n###The values of array number[n] have been reversed###\n\n");

    for(int i = 0; i<10; i++){
        
        printf("the value of array number[%d] is %d\n",i , number[max--] );
       
    }

}

int main(){

    int number[10];

    for(int i = 0; i<10; i++){
        printf("Enter the value for array number[%d]:", i);
        scanf("%d", &number[i]);
    }

    reverse(number,9);

    return 0;
}