// This code will help you to find whether the no. is divisible by 97.

/*
    Program : Divisibility_by_97.c
    Author  : Swaraj Tarte
*/

#include <stdio.h>

int main()
{
    int a;

    printf("Enter the no.: \n");
    scanf("%d", &a);

    printf("If no. is divisible by 97 then 0 will be displayed below. \n");
    printf("%d", a % 97);

    return 0;
}
