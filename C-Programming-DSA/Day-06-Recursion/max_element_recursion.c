#include <stdio.h>

int max(int arr[], int n){
    if(n==1) return arr[0];

    int m = max(arr, n-1);

    if(arr[n-1] > m)
        return arr[n-1];
    else
        return m;
}

int main(){
    int n, arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("%d", max(arr,n));
}