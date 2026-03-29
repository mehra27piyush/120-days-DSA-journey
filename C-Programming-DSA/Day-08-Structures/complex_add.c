#include <stdio.h>
struct Complex { int r,i; };
int main(){
    struct Complex a,b,sum;
    scanf("%d%d",&a.r,&a.i);
    scanf("%d%d",&b.r,&b.i);

    sum.r=a.r+b.r;
    sum.i=a.i+b.i;

    printf("%d + %di",sum.r,sum.i);
}