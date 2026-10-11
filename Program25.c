#include<stdio.h>
#include<stdlib.h>                    // Library function for exit_success

int main()
{
    char sName[30];

    printf("Enter your name : \n");
    scanf("%s", sName);               // Array name is actual there base address that is sName

    printf("Welcome %s\n", sName);

    return EXIT_SUCCESS;
}