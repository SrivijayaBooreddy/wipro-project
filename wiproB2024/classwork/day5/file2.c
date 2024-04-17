#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    system("clear");
    printf("\nEnter a value between(1-5):");
    scanf("%d" ,&ch);
    
    switch(ch)
    {
        default:
           printf("\nEnter the values between 1-5 only");
           break;
        case 1:
           printf("\n1 is present");
           break;
        case 2:
           printf("\n2 is present");
           break;
        case 3:
           printf("\n3 is present");
           break;
        case 4:
           printf("\n4 is present");
           break;
        case 5:
           printf("\n5 is present");
           break;

    }//end of switch
    printf("\n program Ended\n\n");
    return 0;
}