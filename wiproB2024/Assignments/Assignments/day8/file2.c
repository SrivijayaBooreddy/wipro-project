#include <stdio.h>
int findNthNumber(int n)
{
    int count=0;
    int num=1;
    while(count<n)
    {
        int temp=num;
        int flag=0;
        while(temp>0)
        {
            int digit=temp%10;
            if(digit!=1 && digit!=4 && digit!=6 && digit!=9)
            {
                flag=1;
                break;
            }
            temp/=10;
        }
        if(!flag){
            count++;
        }
        num++;
    }
    return num-1;
}

int main()
{
    int T;
    printf("Enter the number of test cases:");
    scanf("%d",&T);

    while(T--){
        int N;
        printf("Enter N:");
        scanf("%d", &N);

        int result=findNthNumber(N);
        printf("Output:%d\n",result);
    }
    return 0;
}