// This code will give the multiplication table of the no. entered by user in reverse order.
// Contains for loop

/*
    Program : Multiplication_Table_rev.c
    Author  : Swaraj Tarte
*/

#include <stdio.h>

int main()
{
    int a;

    printf("Enter the no.: \n");
    scanf("%d", &a);

    for (int b = 10; b; b--)
    {
        printf("%d \n", a * b);
    }

    return 0;
}
