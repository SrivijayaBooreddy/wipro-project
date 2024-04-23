/*
rotate array every Kth element
*/

#include <stdio.h>
void reverseArray(int arr[],int start,int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

//function to rotate array every Kth element
void rotateArray(int arr[],int n,int k)
{
    for(int i=k-1;i<n;i+=k)
    {
        int start = i-k+1;
        int end = i;
        reverseArray(arr,start,end);
    }
}

//function to print an array
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

//main function
int main()
{
    int arr1[]={1,2,3,4,5,6,7,8,9};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int k1 =3;
    rotateArray(arr1,n1,k1);
    printf("output 1:");
    printArray(arr1,n1);

    int arr2[]={1,2,3,4,5,6,7,8,9};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int k2 =4;
    rotateArray(arr2,n2,k2);
    printf("output 2:");
    printArray(arr2,n2);
}
