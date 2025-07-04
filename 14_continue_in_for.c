#include <stdio.h>

int main(){

    int i,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(i==10){
            continue; //skips the iteration and starts fr0m the beginning
        }
        printf("%d\n",i);
    }

    return 0;
}