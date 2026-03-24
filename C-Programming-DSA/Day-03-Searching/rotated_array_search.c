#include <stdio.h>
int main(){
    int arr[100], n, key;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&key);

    int low=0, high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==key){
            printf("%d",mid);
            return 0;
        }

        if(arr[low]<=arr[mid]){
            if(key>=arr[low] && key<arr[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        else{
            if(key>arr[mid] && key<=arr[high])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    printf("-1");
}