// This code will tell whether the input is a prime no. or not.
// contains all loops

/*
    Program : Prime_no.c
    Author  : Swaraj Tarte
*/

#include <stdio.h>

int main()
{
    // using for loop
    int a;
    int prime = 0;

    printf("Enter a no.: \n");
    scanf("%d", &a);

    if (a == 1 || a == 0)
    {
        prime = 2;
    }

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0 && a > 2)
        {
            prime++;
            break;
        }
    }

    if (prime == 1)
    {
        printf("%d is not a prime no. \n", a);
    }
    else if (prime == 2)
    {
        printf("%d is not a prime nor a composite no. \n", a);
    }
    else
    {
        printf("%d is a prime no. \n", a);
    }

    // using while loop
    int b;
    int prim = 0;
    int j = 2;

    printf("Enter a no.: \n");
    scanf("%d", &b);

    if (b == 1 || b == 0)
    {
        prim = 2;
    }

    while (j < b)
    {
        if (b % j == 0 && b > 2)
        {
            prim++;
            break;
        }
        j++;
    }

    if (prim == 1)
    {
        printf("%d is not a prime no. \n", b);
    }
    else if (prim == 2)
    {
        printf("%d is not a prime nor a composite no. \n", b);
    }
    else
    {
        printf("%d is a prime no. \n", b);
    }

    // using do-while loop
    int c;
    int pri = 0;
    int k = 2;

    printf("Enter a no.: \n");
    scanf("%d", &c);

    if (c == 1 || c == 0)
    {
        pri = 2;
    }

    do
    {
        if (c % k == 0 && c > 2)
        {
            pri++;
            break;
        }
        k++;
    } while (k < c);

    if (pri == 1)
    {
        printf("%d is not a prime no. \n", c);
    }
    else if (pri == 2)
    {
        printf("%d is not a prime nor a composite no. \n", c);
    }
    else
    {
        printf("%d is a prime no. \n", c);
    }

    return 0;
}
