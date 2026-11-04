/*

    Write a program which accepts a name from the user and prints that name.

    Input: Piyush Khairnar
    Output: Piyush Khairnar


*/


#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name\n");
    scanf("%[^\n]", Name);

    printf("Your name is %s\n", Name);

    return 0;
}
