#include <stdio.h>

int main(){

    FILE *ptr = fopen("numbers.txt", "w"); // Open the file in write mode

    //FILE *ptr = fopen("numbers.txt", "a"); // write or add to end
    
    int num = 432;
    fprintf(ptr, "%d", num);
    fclose(ptr);
  
    return 0;
}