#include <stdio.h>
int main(){
    int arr[100], freq[100]={0}, n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
    }

    for(int i=0;i<100;i++){
        while(freq[i]--){
            printf("%d ",i);
        }
    }
}