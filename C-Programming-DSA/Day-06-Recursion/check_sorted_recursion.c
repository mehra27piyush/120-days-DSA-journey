#include <stdio.h>

int isSorted(int arr[], int n){
    if(n==1) return 1;

    if(arr[n-1] < arr[n-2])
        return 0;

    return isSorted(arr, n-1);
}

int main(){
    int n, arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    if(isSorted(arr,n))
        printf("Sorted");
    else
        printf("Not Sorted");
}