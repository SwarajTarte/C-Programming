// This code will swap the value of i variable with the 10 times value entered by the user.

#include <stdio.h>

int ten(int *);

int ten(int *a)
{
    *a = *a * 10;
    return *a;
}
int main()
{
    int i;
    printf("Enter a no. which should be rgistered in i variable: \n");
    scanf("%d", &i);
    printf("The value of i is %d. \n", i);

    ten(&i);

    printf("The value of i is %d.", i);

    return 0;
}