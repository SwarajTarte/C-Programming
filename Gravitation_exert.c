// This code will give the gravitational force exerted by earth on the body whose mass has been provided.

#include <stdio.h>

float gravitation(float);

float gravitation(float a)
{
    return a * 9.8;
}
int main()
{
    float mass;

    printf("Enter body's mass in kg: \n");
    scanf("%f", &mass);

    printf("The gravitational force exerted by earth on a body of %f kg is %f N.", mass, gravitation(mass));

    return 0;
}