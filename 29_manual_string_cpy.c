#include <stdio.h>

void manual_strcpy(char *dest, const char *src);

void manual_strcpy(char *dest, const char *src) {

    while (*src) {

        *dest++ = *src++;  //it copies string's character from src to dest and then increament each pointer
    }
    *dest = '\0';

}

int main(){

    char a[100];

    manual_strcpy( a, "hello world");
    printf("%s", a);

    return 0;
}
