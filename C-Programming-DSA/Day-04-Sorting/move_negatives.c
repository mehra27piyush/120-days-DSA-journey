#include <stdio.h>
int main(){
    int arr[100], n, j=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=0;i<n;i++){
        if(arr[i] < 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}