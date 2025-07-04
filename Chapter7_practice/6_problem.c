#include <stdio.h>

// Write a program containing functions which counts the number of positive
// integers in an array.

void find_positive(int arr[], int size);

void find_positive(int arr[], int size){

    int pos_count=0;
    int neg_count=0;

    for(int i = 0; i<size; i++){
        if(arr[i]>0){
            pos_count++;
        }
        if(arr[i]<0){
            neg_count++;
        }
    }
    printf("\n----there is %d positive and %d negative number in this array----\n", pos_count, neg_count);

}

int main(){
   
    int num[10];
    
    for(int i = 0; i<10; i++){
    
        printf("enter the value for num[%d]:", i);
        scanf("%d", &num[i]);
    }
    
    find_positive(num, 10);

    return 0;
}