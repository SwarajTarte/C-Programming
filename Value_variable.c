// This code uses pointer to pointer variable to print value of variable.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a: \n");
    scanf("%d", &a);

    int *b = &a;
    int **c = &b;

    printf("The value of a is %d.", **c);

    return 0;
}