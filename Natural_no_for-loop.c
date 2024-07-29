// This code will print the natural nos. till the limit given by user.
// This code contains for loop.

/*
    Program : Natural_no_for-loop.c
    Author  : Swaraj Tarte
*/

#include <stdio.h>

int main()
{
    int a;

    printf("Enter the limit of natural nos. to be printed: \n");
    scanf("%d", &a);

    for (int b = 1; b <= a; b++)
    {
        printf("%d \n", b);
    }

    return 0;
}
