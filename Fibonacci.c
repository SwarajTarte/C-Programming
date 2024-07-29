// This code will provide the term in fibonacci series on the position entered by user.

/*
    Program : Fibonacci.c
    Author  : Swaraj Tarte
*/

#include <stdio.h>

int fibonacci(int);

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return (fibonacci(n - 1)) + (fibonacci(n - 2));
    }
}
int main()
{
    int term;

    printf("Enter the position of required term of Fibonacci Series: \n");
    scanf("%d", &term);

    printf("The %d term of Fibonaaci Series is %d.", term, fibonacci(term));

    return 0;
}
