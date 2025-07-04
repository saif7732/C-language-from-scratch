#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    srand(time(0));
    char you;
    int bot, draw;
    
    printf("Rock: r\nScissor: s\nPaper: p\n");
    printf("----------------------\n");
    
    while(1){
        
        bot = rand() % 3;

        printf("Chose your move: ");
        scanf(" %c", &you);
        printf("\n");

        if(you != 'r' && you != 's' && you != 'p'){
            printf("Error! Invalid input\n");
            continue;
        }

        if(bot == 0 && you == 'r'){
            printf("bot chose: Rock\n");
            printf("you chose: Rock\n");
            printf("Its a draw!\n");
            draw = 1;
        }
        else if(bot == 0 && you == 's'){
            printf("bot chose: Rock\n");
            printf("you chose: Scissor\n");
            printf("You lose!\n");
            break;
        }
        else if(bot == 0 && you == 'p'){
            printf("bot chose: Rock\n");
            printf("you chose: Paper\n");
            printf("You won!");
            break;
        }
        else if(bot == 1 && you == 'r'){
            printf("bot chose: Scissor\n");
            printf("you chose: Rock\n");
            printf("You won!");
            break;
        }
        else if(bot == 1 && you == 's'){
            printf("bot chose: Scissor\n");
            printf("you chose: Scissor\n");
            printf("It's a draw!\n");
            draw = 1;
        }
        else if(bot == 1 && you == 'p'){
            printf("bot chose: Scissor\n");
            printf("you chose: Paper\n");
            printf("You lose!");
            break;
        }
        else if(bot == 2 && you == 'r'){
            printf("bot chose: Paper\n");
            printf("you chose: Rock\n");
            printf("YOu lose!");
            break;
        }
        else if(bot == 2 && you == 's'){
            printf("bot chose: Paper\n");
            printf("you chose: Scissor\n");
            printf("You won!");
            break;
        }
        else if(bot == 2 && you == 'p'){
            printf("bot chose: Paper\n");
            printf("you chose: Paper\n");
            printf("It's a draw!\n");
            draw = 1;
        }
        printf("------------------------\n");
    }

    return 0;
}