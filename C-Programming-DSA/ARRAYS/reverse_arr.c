#include<stdio.h>
int main(){
int a[5],i;

printf("Enter numbers:\n");

for(i=0;i<5;i++)
scanf("%d",&a[i]);

printf("Reverse array:\n");

for(i=4;i>=0;i--)
printf("%d ",a[i]);

return 0;
}