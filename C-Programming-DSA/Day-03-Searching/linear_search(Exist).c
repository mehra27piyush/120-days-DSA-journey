#include <stdio.h>
int main() {
    int arr[100], n, key, found=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&key);

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            found=1;
            break;
        }
    }

    if(found) printf("Found");
    else printf("Not Found");
}