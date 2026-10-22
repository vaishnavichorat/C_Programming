// Check Admission Eligibility

// Problem Statement: A student is eligible for admission if the student's marks are at least 60 and age is at least 17 years. Accept both values and determine eligibility. Negative age or marks outside 0-100 must be treated as invalid input.

// Expected Output:

// Input: 75 18-> Eligible for Admission

// Input: 55 19-> Not Eligible

// Input: 80 16-> Not Eligible

#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if(fMarks < 0 || fMarks > 100 || iAge < 0)
    {
        printf("Invalid Input");
    }
    else if(fMarks >= 60 && iAge >= 17)
    {
        printf("Eligible for Admission");
    }
    else
    {
        printf("Not Eligible");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}
