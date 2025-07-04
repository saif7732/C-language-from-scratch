#include <stdio.h>

int main()
{

    char c;
    FILE *ptr = fopen("numbers.txt", "r");

    if (ptr == NULL)
    {
        printf("File could not be opened!");
    }

    while (1)
    {

        c = fgetc(ptr);
        printf("%c", c);
        if (c == EOF)  //EOF --> end of file
        {
            break;
        }
    }
    fclose(ptr);

    return 0;
}