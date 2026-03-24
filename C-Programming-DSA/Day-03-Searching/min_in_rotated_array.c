#include <stdio.h>
int main(){
    int arr[100], n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int low=0, high=n-1;

    while(low<high){
        int mid=(low+high)/2;

        if(arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid;
    }

    printf("Minimum: %d", arr[low]);
}