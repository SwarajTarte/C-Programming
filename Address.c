// This code will print the memory address of the number entered by user.

#include <stdio.h>

int main()
{
    int i;

    printf("Enter a no. to get it's memory address: \n");
    scanf("%d", &i);

    printf("The memory address of %d is %p\n", i, &i);

    return 0;
}