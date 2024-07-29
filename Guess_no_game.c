#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    int a;

    printf("Guess a no. between 1 to 100 : \n");
    scanf("%d", &a);

    while (a != randomNumber)
    {
        if (a < randomNumber)
        {
            printf("You entered a lower no. !! \n");
            printf("Enter a higher no. pls: \n");
            scanf("%d", &a);
        }
        else if (a > randomNumber)
        {
            printf("You entered a higher no. !! \n");
            printf("Enter a lower no. pls: \n");
            scanf("%d", &a);
        }
    }

    if (a == randomNumber)
    {
        printf("You entered the right no. which is %d.", a);
    }
    return 0;
}
