#include<stdio.h>
#include<stdlib.h>                            // Library function for exit_success

int main()
{
    char sName[30];

    printf("Enter your name : \n");
    scanf("% [^'\n']s", sName);               // Array name is actual there base address that is sName
                                              // Accept the input string until user will Enter button

    printf("Welcome %s\n", sName);

    return EXIT_SUCCESS;
}