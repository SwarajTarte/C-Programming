// This code will give the multiplication table of the no. entered by user.
// Contains while loop

/*
    Program : Multiplication_Table.c
    Author  : Swaraj Tarte
*/

#include <stdio.h>

int main()
{
    int a, b;
    b = 1;

    printf("Enter the no.: \n");
    scanf("%d", &a);

    while (b <= 10)
    {
        printf("%d \n", a * b);
        b++;
    }

    return 0;
}
