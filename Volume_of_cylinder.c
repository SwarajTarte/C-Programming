#include <stdio.h>

int main()
{
    float radius, height;

    printf("Enter the radius of cylinder: \n");
    scanf("%f", &radius);

    printf("Enter the height of cylinder: \n");
    scanf("%f", &height);

    printf("The volume of the cylinder is %f.", 3.14 * radius * radius * height);

    return 0;
}