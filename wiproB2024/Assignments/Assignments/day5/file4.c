/*find out the sum of series 
    3+33+333+3333+33333+333333*/

#include <stdio.h>
int main()
{
    int n;
    int sum=0,i;
    printf("Enter the range of number:");
    scanf("%d",&n);
    int a=3;
    for(i=1;i<=n;i++)
    {
        sum+=a;
        a=(a*10)+3;
    }
    printf("The sum of the series=%d",sum);
}