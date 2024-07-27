// This code will help you find whether a student is passed or failed.

#include <stdio.h>

int main()
{
    int subject1, subject2, subject3, total;

    printf("Enter the details to check whether you have passed or failed --> \n");

    printf("Enter the %% of Subject 1 : \n");
    scanf("%d", &subject1);

    printf("Enter the %% of Subject 2 : \n");
    scanf("%d", &subject2);

    printf("Enter the %% of Subject 3 : \n");
    scanf("%d", &subject3);

    total = (subject1 + subject2 + subject3) / 3;

    if (subject1 >= 33 && subject2 >= 33 && subject3 >= 33 && total >= 40)
    {
        printf("Your %% are Subject 1 = %d %%; Subject 2 = %d %%; Subject 3 = %d %% & Total = %d %% \n", subject1, subject2, subject3, total);
        printf("You are Passed!!");
    }
    else
    {
        printf("Your %% are Subject 1 = %d %%, Subject 2 = %d %%, Subject 3 = %d %% & Total = %d %% \n", subject1, subject2, subject3, total);
        printf("You are Failed!!");
    }

    return 0;
}