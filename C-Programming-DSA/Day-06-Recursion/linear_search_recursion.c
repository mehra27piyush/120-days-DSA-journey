#include <stdio.h>
int search(int arr[], int n, int key){
    if(n==0) return -1;
    if(arr[n-1]==key) return n-1;
    return search(arr,n-1,key);
}
int main(){
    int n,arr[100],key;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&key);
    printf("%d",search(arr,n,key));
}