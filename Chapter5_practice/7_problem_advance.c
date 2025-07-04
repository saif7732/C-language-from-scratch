#include <stdio.h>

void pattern(int);

void pattern(int n){
    for(int row=1;row<=n;row++){  //"row" represents the current row number

        for(int space=1;space<=n-row;space++){  //this loops prints spaces accordingly to row                n = 5        
        printf(" ");                                                                               //row = 1     space = 5-1    
        }                                                                                          //row = 2     space = 5-2   
        for(int star=1;star<=2*row-1;star++){   //this loop prints stars in a pattern 1 3 5 7 9...
        printf("*");
        }
    
        printf("\n");
    }
    

}

int main(){

    int n;
    printf("enter the row number of stars to be printed:");
    scanf("%d",&n);
    pattern(n);

    return 0;
}