#include <stdio.h>

int main(){

    int multiplication[10];

    for( int i = 0; i<10; i++){

    multiplication[i] = (i+1) * 5;
        
    printf("the value ar multiplication[%d] is %d\n",i, multiplication[i]);
    
}


    return 0;
}