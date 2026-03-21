#include<stdio.h>
int main(){
int a[5],i,first,second;

printf("Enter numbers:\n");

for(i=0;i<5;i++)
scanf("%d",&a[i]);

first=second=a[0];

for(i=0;i<5;i++)
{
if(a[i]>first)
{
second=first;
first=a[i];
}
else if(a[i]>second && a[i]!=first)
second=a[i];
}

printf("Second largest = %d",second);
return 0;
}