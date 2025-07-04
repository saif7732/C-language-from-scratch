#include <stdio.h>

//3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
//earth. Consider g = 9.8m/s^2

float attraction(float);

float attraction(float mass){
    
    float g=9.8;
    float attraction = mass * g;
    return attraction;
    
}

int main(){
    
    float mass;
    printf("enter the mass of the object in kg:");
    scanf("%f", &mass);
    printf("the attraction force is %.2fN \n", attraction(mass));

    return 0;
}