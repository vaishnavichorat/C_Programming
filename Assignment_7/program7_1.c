/*  Write a program which accepts a number from the user and prints that number of $ symbols on the screen.

    Input:5
    Output : $ * $ * $ * $ * $ * 

    Input: 3
    Output: $ * $ * $ *

    Input: -3
    Output: $ * $ * $ *
    
    */


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo > 0)
    {
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("$");
        }
    }
    else if(iNo < 0)
    {
        iNo = -iNo;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("$\n");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}