// This code will take a no. as an input from user and sum all the natural nos. till that no.

/*
    Program : Sum_first_n.c
    Author  : Swaraj Tarte
*/

#include <stdio.h>

int sum(int);

int sum(int a)
{
    if (a == 1)
    {
        return 1;
    }
    return sum(a - 1) + a;
}

int main()
{
    int a;

    printf("Enter the no.: \n");
    scanf("%d", &a);

    printf("The sum of first %d natural nos. is %d.", a, sum(a));

    return 0;
}
