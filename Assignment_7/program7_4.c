/*
    Write a program which accepts N from the user and prints all odd numbers up to N.

    Input: 18
    Output: 1 3 5 7 9 11 13 15 17

*/

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        printf("%d ", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}