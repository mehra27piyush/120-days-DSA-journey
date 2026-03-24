#include <stdio.h>
int main() {
    int arr[100], n, key;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&key);

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
}