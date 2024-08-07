// This code calculates the sum and average of two numbers using pointers and function.

#include <stdio.h>

float sum(float *a, float *b);

float sum(float *a, float *b)
{
    return *a + *b;
}

float avg(float *a, float *b);

float avg(float *a, float *b)
{
    return (*a + *b) / 2;
}

int main()
{
    float i, j;
    printf("Enter 1st no.: \n");
    scanf("%f", &i);
    printf("Enter 2nd no.: \n");
    scanf("%f", &j);

    printf("The sum and average of entered nos. is %f and %f respectively.\n", sum(&i, &j), avg(&i, &j));

    return 0;
}