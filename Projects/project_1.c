#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 0 and 100
    int num = rand() % 101;

    printf("random number generated\n");

    int n,number_of_guesses=0;
    
    do{
        
        printf("Guess the number:");
        scanf("%d",&n);
        number_of_guesses++;

        if(n>num){
            printf("Lower your number\n");
        }
        else if(n<num){
            printf("Higher your number\n");
        }
        else{
            printf("You've guess the number in %d guesses",number_of_guesses);
        }
    }

    while(n!=num);


    return 0;
}
