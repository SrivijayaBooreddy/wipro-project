#include <stdio.h>
int main()
{
    char operator;
    int n1,n2;
    float res;
    printf ("select an operator(+,_,*,/) to perform an operation");
    scanf ("%c",&operator);
    printf("Enter the first number");
    scanf("%d", &n1);
    printf("Enter the second number");
    scanf("%d", &n2);
    
    if(operator=='+')
    {
        res=n1+n2;
        printf("Addition of %d and %d is: %f",n1,n2,res);
    }

    else if(operator=='-')
    {
        res=n1-n2;
        printf("Subtraction of %d and %d is: %f",n1,n2,res);
    }

    else if(operator=='*')
    {
        res=n1*n2;
        printf("Multiplication of %d and %d is: %f",n1,n2,res);
    }

    else if(operator=='/')
    {
        if(n2==0)
        {
            printf("\n Divisor cannot be zero.Please enter another value");
            scanf("%d",&n2);
        }
        res=n1/n2;
        printf("Division of %d and %d is: %.2f",n1,n2,res);
    }
    else
    {
        printf("\n You have entered the wrong inputs");
    }
}