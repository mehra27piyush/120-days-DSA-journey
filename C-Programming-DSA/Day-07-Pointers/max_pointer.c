#include <stdio.h>
void max(int *a, int *b){
    if(*a > *b) printf("%d",*a);
    else printf("%d",*b);
}
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    max(&x,&y);
}