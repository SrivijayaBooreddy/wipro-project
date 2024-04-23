/* Given an unsorted array a of size N of non negative integers ,
   find a continuous subarray which adds to a given number of sum.
*/

#include <stdio.h>
void findSubarray(int arr[],int n, int target){
    int start =0 , end = 0;
    int current_sum = arr[0];
    while(end < n){
        if(current_sum == target){
            printf("Sum found between indexes %d and %d\n",start,end);
            return;
        }
        if (current_sum < target){
            end++;
            if(end < n)
              current_sum += arr[end];
        }else{
            current_sum -=arr[start];
            start++;
        }
    }
    printf("Nosubarray found\n");
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    findSubarray(arr,n,target);
    return 0;
}