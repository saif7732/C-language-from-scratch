#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Create a structure representing a bank account of a customer. What fields did 
//you use and why? 

typedef struct bank_account{
    char name[100];
    char phone[100];
    char date[100];
} account;

// void show(account a, int index);
// void show(account a, int index){
//     printf("\n=========Account %d Details:=========\n", index);
//     printf("Name: %s\n", a.name);
//     printf("Phone: %s\n", a.phone);
//     printf("Date: %s\n", a.date);

void put(FILE *fp, account a, int index);
void put(FILE *fp, account a, int index){

    fprintf(fp, "\n=========Account %d Details:=========\n", index);
    fprintf(fp, "Name: %s\n", a.name);
    fprintf(fp, "Phone: %s\n", a.phone);
    fprintf(fp, "Date: %s\n", a.date);

}

int main(){

    int n;
    printf("How many accounts to save?: ");
    scanf("%d", &n);
    account *a = (account*)calloc(n, sizeof(account));

    getchar();

    for(int i=0; i<n; i++){

        printf("\n===========Enter details for account %d===========\n", i+1);

        printf("Enter the account holder's name: ");
        fgets(a[i].name, sizeof(a[i].name), stdin);
        a[i].name[strcspn(a[i].name, "\n")] = '\0';

        //getchar();
        
        printf("Enter the account holder's phone: ");
        fgets(a[i].phone, sizeof(a[i].phone), stdin);
        a[i].phone[strcspn(a[i].phone, "\n")] = '\0';

        //getchar();
        
        printf("Enter the account creation date: ");
        fgets(a[i].date, sizeof(a[i].date), stdin);
        a[i].date[strcspn(a[i].date, "\n")] = '\0';

    }

    // for(int i=0; i<n; i++){
    // show(a[i], i+1);
    // }

    FILE *fp = fopen("50_accounts.txt", "w");
    for(int i = 0; i<n; i++){
        put(fp, a[i], i+1);
    }
    free(a);
    fclose(fp);

    printf("All data stored to 50_account.txt");

    return 0;
}