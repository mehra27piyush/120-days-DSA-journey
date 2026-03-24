#include <stdio.h>
int main(){
    int arr[100], n, swaps=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min])
                min=j;
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
            swaps++;
        }
    }

    printf("%d",swaps);
}