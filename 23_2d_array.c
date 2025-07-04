#include <stdio.h>

int main(){

    int arr[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Enter the value of arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }


    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         printf("The value of arr[%d][%d] is:%d\n", i,j,arr[i][j]);
    //     }
    // }

    printf("\nThe values of 2D array are printed below:\n\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d   " ,arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}