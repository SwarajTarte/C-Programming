// This code will print the sum of first ten natural nos.
//  Contains while-loop ; for-loop ; do-while-loop

#include <stdio.h>

int main()
{
    // using while loop
    int a = 1;
    int sum = 0;

    while (a <= 10)
    {
        sum += a;
        a++;
    }

    printf("The sum of first ten natural nos. is %d.\n", sum);

    // using for loop
    int add = 0;

    for (int b = 1; b <= 10; b++)
    {
        add += b;
    }

    printf("The sum of first ten natural nos. is %d.\n", add);

    // using do-while loop
    int c = 1;
    int addition = 0;

    do
    {
        addition += c;
        c++;
    } while (c <= 10);

    printf("The sum of first ten natural nos. is %d.\n", addition);

    return 0;
}