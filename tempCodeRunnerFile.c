#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "fonction1.h"


int main()
{
   int choice;     
    printf("\n\n\t\t\tBANK MANAGEMENT SYSTEM");
    printf("\n\n\n\t\t\twelcome to main menu:");
    printf("\n\n\t\t1.Create new account");
    printf("\n\t\t2.Update information of existing account");
    printf("\n\t\t3.check existing accounts");
    printf("\n\t\t4.Remove existing accountn");
    printf("\n\t\t5.Exit");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {   
            system("cls");
            fonction1();
        }
        break;
    }
    
    return 0;

}