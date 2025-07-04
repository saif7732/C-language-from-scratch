#include <stdio.h>

int main(){

    FILE *ptr=fopen("numbers.txt", "a");
    char c = fgetc(ptr);
    //char s[]= "hello world";

    fputc(c, ptr);
   // fprintf(ptr, "%s", s);

    fclose(ptr);

    return 0;
}