#include <stdio.h>
int findEquilibrium(int arr[],int n){
    int total_sum = 0;
    for(int i=0; i<n; i++){
        total_sum +=arr[i];
    }
    int left_sum =0;
    for(int i=0;i<n;i++){
        total_sum -= arr[i];
        if(left_sum == total_sum){
            return i;
        }
        left_sum +=arr[i];
    }
    return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int equilibrium_index = findEquilibrium(arr,n);
    printf("%d\n",equilibrium_index);
    return 0;
}