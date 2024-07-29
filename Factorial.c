// This code will provide the factorial of given no.
// A factorial, denoted by an exclamation point (e.g., ( n! )), is a mathematical operation that multiplies a given positive integer ( n ) by all the positive integers less than it. For example, the factorial of 5 (written as ( 5! )) is calculated as: 5!=5×4×3×2×1=120
// Contains for loop

/*
    Program : Factorial.c
    Author  : Swaraj Tarte
*/

#include <stdio.h>

int main()
{
    int product = 1;
    int no;

    printf("Enter the no.: \n");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        product *= i;
    }

    printf("The factorial of %d is %d.", no, product);

    return 0;
}
