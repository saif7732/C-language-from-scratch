#include <stdio.h>

int main(){

    int mark[] = {1,2,3,4,5,6,7,8,9,0};
    int* ptr = mark;

    for(int i = 0; i < 10; i++){

        printf("the value at mark[%d] is %d\n", i, *ptr);
        ptr++;
        
    }
    return 0;
}