// This code will tell you how much income tax you have to pay annually.

/*
    Program : Income_tax.c
    Author  : Swaraj Tarte
*/

#include <stdio.h>

int main()
{
    float income, tax;

    printf("Enter the following details to find out how much income tax you have to pay --> \n");

    printf("Enter your annual income in Rs.: \n");
    scanf("%f", &income);

    if (income > 1000000)
    {
        tax = (income * 30) / 100;
        printf("You have to pay Rs.%f annual income tax.", tax);
    }
    else if (income >= 500000)
    {
        tax = (income * 20) / 100;
        printf("You have to pay Rs.%f annual income tax.", tax);
    }
    else if (income >= 250000)
    {
        tax = (income * 5) / 100;
        printf("You have to pay Rs.%f annual income tax.", tax);
    }
    else
    {
        printf("You don't have to pay any income tax.");
    }

    return 0;
}
