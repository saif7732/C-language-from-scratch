#include <stdio.h>

//Write a program to read a text file character by character and write its content 
//twice in separate file

int main(){

    char ch;
    FILE *fp2, *fp1;
    fp1 = fopen("problem_3_copy.txt", "r");
    fp2 = fopen("problem_3_paste.txt", "w");
    
    while((ch = fgetc(fp1)) != EOF){
        
        fputc(ch, fp2);
    }


    return 0;
}