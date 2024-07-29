// This code will print the natural nos. till the limit given by user.
// This code contains do-while loop.

#include <stdio.h>

int main()
{
    int a, b;

    a = 1;

    printf("Enter the limit of natural nos. to be printed: \n");
    scanf("%d", &b);

    do
    {
        printf("%d \n", a);
        a++;
    } while (a <= b);

    return 0;
}