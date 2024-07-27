// This code will tell you whether the year entered by you is a leap year or not.

/*
    Program : Leap_year_finder.c
    Author  : Swaraj Tarte
    Date    : 27 July 2024
*/

#include <stdio.h>

int main()
{
    int year;

    printf("Enter the year to check whether it's a leap year or not. \n");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d is a Leap year.", year);
    }
    else
    {
        printf("%d is not a Leap year.", year);
    }

    return 0;
}
