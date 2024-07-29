#include <stdio.h>

float average(int, int, int);

float average(int a, int b, int c)
{
    return (a + b + c) / 3;
}

int main()
{

    int a, b, c;

    printf("Enter the first no.: \n");
    scanf("%d", &a);

    printf("Enter the second no.: \n");
    scanf("%d", &b);

    printf("Enter the third no.: \n");
    scanf("%d", &c);

    printf("The average of %d, %d & %d is %f.", a, b, c, average(a, b, c));

    return 0;
}