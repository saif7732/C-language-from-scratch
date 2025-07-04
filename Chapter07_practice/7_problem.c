#include <stdio.h>

int main(){

    int table[3][10];
    int multi[] = {2,7,9};

    for(int i = 0; i<3; i++){
        for(int j = 0; j<10; j++){
      
            table[i][j] = multi[i]*(j+1);
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<10; j++){
      
          printf("the value of table[%d][%d] is %d\n", i, j , table[i][j]);
        }
        printf("\n");
    }

    return 0;
}