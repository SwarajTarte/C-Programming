// This code will give you the product of the entered numbers by using call by reference.

/*
    Program : Product.c
    Author  : Swaraj Tarte
*/

#include <stdio.h>

int multiply(int *a, int *b);

int multiply(int *a, int *b)
{
    return *a * *b;
}

int main()
{
    int i, j;

    printf("Enter 1st numbers: \n ");
    scanf("%d", &i);

    printf("Enter 2nd numbers: \n ");
    scanf("%d", &j);

    printf("The product of %d and %d is %d", i, j, multiply(&i, &j));

    return 0;
}
