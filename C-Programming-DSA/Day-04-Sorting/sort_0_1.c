 #include <stdio.h>
int main(){
    int arr[100], n, count0=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0) count0++;
    }

    for(int i=0;i<count0;i++) arr[i]=0;
    for(int i=count0;i<n;i++) arr[i]=1;

    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}