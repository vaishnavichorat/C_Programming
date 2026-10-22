// Check Leap Year
// Problem Statement: Accept a year and determine whether it is a leap year according to Gregorian calendar rules. A year is a leap year if it is divisible by 400, or divisible by 4 but not by 100. Consider years less than or equal to zero invalid.
// Expected Output:
// Input: 2024->Leap Year
// Input: 1900->Not a Leap Year
// Input: 2000->Leap Year

#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid Year");
    }
    else if(iYear % 400 == 0)
    {
        printf("Leap Year");
    }
    else if(iYear % 100 == 0)
    {
        printf("Not a Leap Year");
    }
    else if(iYear % 4 == 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}
