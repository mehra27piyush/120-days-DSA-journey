#include <stdio.h>
int main(){
    int arr[100], n;
    scanf("%d",&n);

    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int *p = arr;
    int min = *p;

    for(int i=1;i<n;i++){
        if(*(p+i) < min)
            min = *(p+i);
    }

    printf("%d",min);
}