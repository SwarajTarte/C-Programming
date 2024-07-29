/*
    This code will generate a pattern like this:
    *
    ***
    *****
    but will take input in how many lines this pattern should be printed.
*/

/*
    Program : Asterisk_pattern.c
    Author  : Swaraj Tarte
*/

#include <stdio.h>

int main()
{
    int lines;

    printf("Enter no. of lines in which pattern should be printed : \n");
    scanf("%d", &lines);

    for (int i = 1; i < lines; i++)
    {

        // for i = 0 = 1 star
        // for i = 1 = 3 star
        // for i = 2 = 5 star

        for (int a = 1; a <= 2 * i - 1; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
