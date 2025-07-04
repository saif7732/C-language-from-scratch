#include<stdio.h>

int main(){

int i;
char c;
float f;
double d;

printf("enter your integer number: ");
scanf("%d", &i);
// getchar();
printf("enter your character: ");
scanf(" %c", &c);
printf("enter your floating point number: ");
scanf("%f", &f);
printf("enter your double number: ");
scanf("%lf", &d);

printf("int = %d\n", i);
printf("char = %c\n", c);
printf("float = %.2f\n", f);
printf("double = %.14lf\n", d);

return 0;
}