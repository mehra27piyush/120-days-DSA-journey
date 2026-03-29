#include <stdio.h>
struct Rect{ int l,b; };
int main(){
    struct Rect r;
    scanf("%d%d",&r.l,&r.b);
    printf("%d",r.l*r.b);
}