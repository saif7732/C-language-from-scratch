#include <stdio.h>

int main(){

    int a,b,c,d;
    printf("Enter the value of a:");
    scanf("%d",&a);
    
    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("Enter the value of c:");
    scanf("%d",&c);

    printf("Enter the value of d:");
    scanf("%d",&d);

    if(a>b && a>c && a>d){
        printf("a is the greatest number");
    }
    
    else if(b>a && b>c && b>d){
        printf("b is the greatest number");
    }

    else if(d>a && d>b && d>c){
        printf("d is the greatest number");
    }
    else{
        printf("c is the greatest number");
    }

    return 0;
}