#include <stdio.h>
#include <string.h>

int main(){

    char name[50] , address[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);   //get multi strings input from user
    name[strcspn(name, "\n")] = '\0';
    // size_t remove = strcspn(name, "\n");
    // name[remove] = '\0';

    printf("Enter your address: ");
    fgets(address, sizeof(address), stdin);   //get multi strings input from user
    address[strcspn(address, "\n")] = '\0';
    // size_t remove2 = strcspn(address, "\n");
    // address[remove2] = '\0';

    printf("\nName: %s\nAddress: %s\n", name, address);

    // puts("%s", name);      // automatically puts a \n 
    
    // puts(address);

   
    return 0;
}