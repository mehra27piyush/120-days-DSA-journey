#include <stdio.h>
int main(){
    int arr[100], n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=0;i<n;i++){
        if((i==0 || arr[i]>arr[i-1]) &&
           (i==n-1 || arr[i]>arr[i+1])){
            printf("%d",arr[i]);
            break;
        }
    }
}