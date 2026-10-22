// Check Voting Eligibility
// Problem Statement: Accept the age of a person and determine whether the person is eligible to vote. A person must be at least 18 years old to vote. A negative age should be considered invalid.
// Expected Output:
// Input: 21->Eligible for Voting
// Input: 16->Not Eligible for Voting
// Input: -5->Invalid Age

#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for Voting");
    }
    else
    {
        printf("Not Eligible for Voting");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
