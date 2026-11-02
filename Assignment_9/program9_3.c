/* 
    Write a program to find even factorial of given number.

    Input:5
    Output: 8 (4*2)

    Input: -5
    Output: 8   (4*2)

    Input: 10
    Output:  3840   (10*8*6*4*2)

*/

#include <stdio.h>

int EvenFactorial(int iNo)
{
    if (iNo < 0) {
        iNo = -iNo;
    }
    
    int iFact = 1;
    for (int i = 2; i <= iNo; i += 2) {
        iFact *= i;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

    return 0;
}
