#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[100], n, key;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&key);

    int low=0, high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==key){
            printf("%d", arr[mid]);
            return 0;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    // closest check
    if(low >= n) printf("%d", arr[high]);
    else if(high < 0) printf("%d", arr[low]);
    else{
        if(abs(arr[low]-key) < abs(arr[high]-key))
            printf("%d", arr[low]);
        else
            printf("%d", arr[high]);
    }
}
