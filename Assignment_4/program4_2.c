// Check Even or Odd Number
// Problem Statement : Accept an integer from the user and determine whether it is even or odd. An even number is completely divisible by 2

// Expected Output
// Input: 24 Even Number
// Input: 17 Odd Number

#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
