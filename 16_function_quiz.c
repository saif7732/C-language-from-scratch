#include <stdio.h>

void good_morning();
void good_afternoon();
void good_evening();

// Function prototypes for greeting functions
// These functions will print greetings for different times of the day

void good_morning() {    // Function to print a good morning message
    printf("Good morning!\n");
}

void good_afternoon() {    // Function to print a good afternoon message
    printf("Good afternoon!\n");
}

void good_evening() {   // Function to print a good evening message
    printf("good evening!\n");
}


int main(){

    good_morning();
    good_afternoon();
    good_evening();
    // Calling the functions to print greetings
    // Each function prints a different greeting message
    // The functions are defined to print greetings for different times of the day

    return 0;
}