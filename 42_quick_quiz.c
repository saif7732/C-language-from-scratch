#include <stdio.h>

int main(){

    FILE *ptr = fopen("numbers.txt", "r");

    if(ptr == NULL){
        printf("File not found!");
    }
    else{
    int num; 
    fscanf(ptr, "%d", &num);
    printf("the value of num is: %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("the value of num is: %d\n", num);
    }

    fclose(ptr); 

    return 0;
}