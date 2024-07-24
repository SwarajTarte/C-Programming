/*
    Program : Area_of_rectangle.c
    Author  : Swaraj Tarte
    Date    : 24 July 2024
*/

#include <stdio.h>

int main()
{
    float length, breadth;

    printf("Enter the length of the rectangle: \n");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: \n");
    scanf("%f", &breadth);

    printf("The area of the rectangle is %f.", length * breadth);
    return 0;
}
