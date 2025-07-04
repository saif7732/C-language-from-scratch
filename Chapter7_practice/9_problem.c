#include <stdio.h>

int main(){

    int three_dimentional_array[5][5][5];

    for(int i = 0; i<5; i++){

        for(int j = 0; j<5; j++){

            for(int k = 0; k<5; k++){

                printf("enter the value of tda[%d][%d][%d]:",i,j,k);
                scanf("%d", &three_dimentional_array[i][j][k]);

            }
        }
    }

    for(int i = 0; i<5; i++){

        for(int j = 0; j<5; j++){

            for(int k = 0; k<5; k++){     

                printf("the address of tda[%d][%d][%d] is %u\n",i,j,k, &three_dimentional_array[i][j][k]);
                
            }
        }
    }



    return 0;
}