#include <stdio.h>

int main(){

    int i=0,a;
    printf("how many time do you want to print the text:");
    scanf("%d",&a);
    i=0;
    while(i<a){
        printf("%d. Hello world, this is saif\n",i+1);
        i=i+1;
    }


    // int i=0;
    // while(i<4){
    //     printf("hello world\n");
    //     i=i+1;
    // }

    return 0;
}