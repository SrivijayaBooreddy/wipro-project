/*print series of 1,2,4,8,16,32,64*/

#include <stdio.h>

int main()
{
    int i,n=64;
    for(i=1;i<=n;i*=2)
    {
        printf("%d,",i);
    }
    printf("%d",i);
    return 0;
}