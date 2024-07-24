/*
    Program : Area_of_circle.c
    Author  : Swaraj Tarte
    Date    : 24 July 2024
*/

#include <stdio.h>

int main()
{
    float radius;

    printf("Enter the radius of the circle: \n");
    scanf("%f", &radius);

    printf("The area of the circle is %f.", 3.14 * radius * radius);

    return 0;
}
