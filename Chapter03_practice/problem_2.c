#include <stdio.h>

int main(){

    int phy,chem,bio,math,total,average ;
    printf("Enter your mark in physics:");
    scanf("%d",&phy);

    printf("Enter your mark in chemistry:");
    scanf("%d",&chem);

    printf("Enter your mark in biology:");
    scanf("%d",&bio);

    printf("Enter your mark in mathematics:");
    scanf("%d",&math);

    total=math+chem+bio+phy;
    average=total/4;

    if (phy>100 || chem>100 || bio>100 || math>100){
        printf("Invalid mark");
    }

    else if (phy>33 && chem>33 && bio>33 && math>33 && average>=40) {
        printf("Congrates, You passed the test\n");
        printf("Your total mark is: %d", total);
    }
    else {
    printf("You failed the test\n");
    printf("Your total mark is: %d", total);
    }

    return 0;
}