#include <stdio.h>

int main()
{
    float C;

    printf("Enter the temperature in Celsius: \n");
    scanf("%f", &C);

    printf("The temperature in Fahrenheit is %f.", C * 1.8 + 32);

    return 0;
}