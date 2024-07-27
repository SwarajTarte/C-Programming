// This code will help you to calculate the simple interest.

/*
    Program : Simple_Interest.c
    Author  : Swaraj Tarte
*/

#include <stdio.h>

int main()
{
    float principal, years, rate, interest;

    printf("Enter Principal Amount in Rs.: \n");
    scanf("%f", &principal);

    printf("Enter tenure/no. of years: \n");
    scanf("%f", &years);

    printf("Enter Rate of Interest in %%: \n");
    scanf("%f", &rate);

    interest = (principal * rate * years) / 100;

    printf("The total simple interestn is of Rs. %f. \n", interest);

    printf("Total amount with interest is Rs. %f", interest + principal);

    return 0;
}
