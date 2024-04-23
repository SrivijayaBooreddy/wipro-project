

#include <stdio.h>
int main()
{
    int a ,b:
    int n;
    printf("Enter two integer values");
    scanf("%d,%d", &a,&b);
    printf("Enter n: Addition, Subtraction,Multiplication,Division\n");
    scanf("%d", &n);

    switch(n)
    {
        case 1:printf("%d",a+b);
        break;

        case 2:printf("%d",a-b);
        break;

        case 3:printf("%d",a*b);
        break;

        case 4:if(b !=0)
                  printf("%.2f",(float)a/b);
               else
                  printf("Error Division by zero is not possible");
        break;
        default: printf("Error Invalid number n");
        break;
    }
    return 0;



}
