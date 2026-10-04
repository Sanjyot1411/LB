/*
Step 1 : Understand the problem statement
Step 2 : Write the algorithm
Step 3 : Decide the programming language
Step 4 : Write the program
Step 5 : Test the program
*/

////////////////////////////////////////////////////////////////////
//
// Step 1 :  Understand the problem statement
//           User is going to enter any two integers
//           And we have to perform addtion
////////////////////////////////////////////////////////////////////

//  Step 2 : Write the algorithm
/*
            START
                    Accept first no as NO1
                    Accept second no as NO2
                    Create the variable as Ans to store the result
                    Perform the addition and store into Ans
                    Display the result from Ans
            END
*/

////////////////////////////////////////////////////////////////////
//    Step 3 : Decide the programming language
//             We select c Programming
//

////////////////////////////////////////////////////////////////////
//
//    Step 4 : Write the program
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iValue1 , iValue2 , iResult;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;         // Business Logic

    printf("%d\n", iResult);

    return 0;
}