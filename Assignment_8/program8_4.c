/*
    Write a program which accepts a number from the user and displays its table in reverse order.

    Input: 2
    Output: 2 4 6 8 10 12 14 16 18 20

    Input: 5
    Output: 5 10 15 20 25 30 35 40

    Input: -5
    Output: -5 -10 -15 -20 -25 -30 -35 -40

*/

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d ", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}