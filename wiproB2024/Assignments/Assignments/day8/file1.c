/*
check wheather a given number can be expressed as the sum of two prime numbers
*/

#include <stdio.h>
int isPrime(int n)
{
    if(n<=1)
    return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

void findPrimeSum(int num)
{
    int count = 0;
    for(int i=2;i<=num/2;i++)
    {
        if(isPrime(i)&&isPrime(num-i))
        {
            printf("%d=%d+%d\n",num,i,num-i);
            count++;
        }
    }
    if(count>0)
    {
        printf("NoofWays=%d\n",count);
    }else
    {
        printf("NoofWays=-1\n");
    }
}

int main()
{
    int num;
    printf("Enter a positive integer:");
    scanf("%d",&num);
    findPrimeSum(num);
    return 0;
}