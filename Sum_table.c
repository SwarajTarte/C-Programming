// This program will provide the sum of multiplication table of the given number
// Contains for loop

/*
    Program : Sum_table.c
    Author  : Swaraj Tarte
*/

#include <stdio.h>

int main()
{
    int a;
    int sum = 0;

    printf("Enter the no.: \n");
    scanf("%d", &a);

    for (int i = 1; i <= 10; i++)
    {
        sum += i * a;
    }

    printf("The sum of multiplication table of %d is %d.", a, sum);

    return 0;
}
