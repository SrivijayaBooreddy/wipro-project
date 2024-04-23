/*Demo on for loop to print half diamond stars*/

#include <stdio.h>
int main()
{
    int i,j,n=5;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--)
    {
        for(j=1s;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}