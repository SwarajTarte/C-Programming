// This code will help you to find the grade a student got on basis of his/her %. 

#include <stdio.h>

int main()
{
    int a;

    printf("Enter your %% to get your grade: \n");
    scanf("%d", &a);

    if (a >= 90)
    {
        printf("A");
    }
    else if (a >= 80)
    {
        printf("B");
    }
    else if (a >= 70)
    {
        printf("C");
    }
    else if (a >= 60)
    {
        printf("D");
    }
    else if (a >= 50)
    {
        printf("E");
    }
    else
    {
        printf("F");
    }

    return 0;
}