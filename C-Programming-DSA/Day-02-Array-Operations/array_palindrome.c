#include <stdio.h>
int main() {
    int arr[100], n, flag=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            flag=0;
            break;
        }
    }

    if(flag) printf("Palindrome");
    else printf("Not Palindrome");
}