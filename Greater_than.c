// This will find out which number is greatest among the four entered nos.

/*
    Program : Greater_than.c
    Author  : Swaraj Tarte
*/

#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter the 1st no.: \n");
    scanf("%d", &a);

    printf("Enter the 2nd no.: \n");
    scanf("%d", &b);

    printf("Enter the 3rd no.: \n");
    scanf("%d", &c);

    printf("Enter the 4th no.: \n");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest no.", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is the greatest no.", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is the greatest no.", c);
    }
    else
    {
        printf("%d is the greatest no.", d);
    }

    return 0;
}
