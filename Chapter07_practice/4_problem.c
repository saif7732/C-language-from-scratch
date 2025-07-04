#include <stdio.h>

int main(){

    int multiplication[10];
    
    for(int i = 0; i<10; i++){
        printf("Enter the value to store in multiplication[%d]:", i);
        scanf("%d",&multiplication[i]);

    }
    
    for(int i=0; i<10; i++){
        multiplication[i] = multiplication[i]* 5;
        printf("the value at multiplication[%d] is %d\n",i, multiplication[i]);
    }

    return 0;
}