#include<stdio.h>
#include<stdlib.h>

void Maximum(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("Maximum is :%d\n");
    }
    else
    {
        printf("Maximum is :%d\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number : \n");
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    Maximum(iValue1,iValue2);

    return EXIT_SUCCESS;
}
