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
int findNthPrimeNumber(int n)
{
    int count=0;
    int num=2;
    while(count<n)
    {
        int temp=num;
        int flag=0;
        while(temp>0){
            int digit=temp%10;
            if(!isPrime(digit)){
                flag=1;
                break;
            }
            temp/=10;
        }
        if(!flag){
            count++;
        }
        if(count==n){
            return num;
        }
        num++;
    }
    return -1;
}

int main()
{
    int T;
    printf("Enter the number of test cases:");
    scanf("%d",&T);

    while(T--){
        int N;
        printf("Enter N:");
        scanf("%d",&N);

        int result=findNthPrimeNumber(N);
        printf("Output: %d\n",result);
    }
    return 0;
}