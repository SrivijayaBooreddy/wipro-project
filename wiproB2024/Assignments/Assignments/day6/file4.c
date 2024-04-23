#include <stdio.h>
int findPartitionPoint(int arr[], int n){
    int maxLeft[n],minRight[n];

    // Find maximum element from left side
    maxLeft[0] = arr[0];
    for(int i = 1; i<n ; i++){
        maxLeft[i] = (arr[i]>maxLeft[i-1])?arr[i]:maxLeft[i-1];
    }

    //find minimum element from right side
    minRight[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        minRight[i]=(arr[i]<minRight[i+1])?arr[i]:minRight[i+1];
    }

    //find the partition point
    for(int i=1;i<n-1;i++)
    {
        if (arr[i]>=maxLeft[i]&&arr[i]<=minRight[i])
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr1[]={4,3,2,5,8,6,7};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    printf("Output 1:%d\n",findPartitionPoint(arr1,n1));

    int arr2[]={5,6,2,8,10,9,8};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    printf("Output 2:%d\n",findPartitionPoint(arr2,n2));

    return 0;
}