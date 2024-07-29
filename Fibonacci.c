#include <stdio.h>

int fibonacci(int);

int fibonaaci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return (fibonaaci(n - 1)) + (fibonaaci(n - 2));
    }
}
int main()
{
    int term;

    printf("Enter the position of required term of Fibonaaci Series: \n");
    scanf("%d", &term);

    printf("The %d term of Fibonaaci Series is %d.", term, fibonaaci(term));

    return 0;
}