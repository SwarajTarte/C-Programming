// This code will print the numbers in reverse order from the given input till 0.
// This code contains decrement for loop.

/*
    Program : Reverse_no.c
    Author  : Swaraj Tarte
*/

#include <stdio.h>

int main()
{
    int a;

    printf("Enter the limit of natural nos. from where to be printed: \n");
    scanf("%d", &a);

    for (int b = a; b; b--)
    {
        printf("%d \n", b);
    }

    return 0;
}
