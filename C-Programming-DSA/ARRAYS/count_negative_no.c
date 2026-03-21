#include<stdio.h>
int main(){
int a[5],i,count=0;

printf("Enter numbers:\n");

for(i=0;i<5;i++)
scanf("%d",&a[i]);

for(i=0;i<5;i++)
{
if(a[i]<0)
count++;
}

printf("Negative numbers = %d",count);
return 0;
}