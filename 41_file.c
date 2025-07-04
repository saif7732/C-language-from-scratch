#include <stdio.h>

int main(){

    FILE *ptr = fopen("numbers.txt", "r"); // Open the file in read mode

    int num;  
    fscanf(ptr, "%d", &num);   // Read the first integer from the file
    printf("the value of num is: %d\n", num);

    fscanf(ptr, "%d", &num); // Read the second integer from the file
    printf("the value of num is: %d\n", num);

    fclose(ptr); // Close the file after reading

    return 0;
} 