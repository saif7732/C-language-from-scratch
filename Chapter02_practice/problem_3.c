#include <stdio.h>

int main(){

    // // Explain step by step evaluation of 3*x/y – z+k,
    //  where x=2, y=3, z=3, k=1

    int x,y,z,k,evaluation;
    printf("enter the value of x,y,z,k:");
    scanf("%d,%d,%d,%d", &x,&y,&z,&k);
    
    evaluation= 3*x/y - z+k;
    printf("The evaluation is %d",evaluation);



    return 0;
}