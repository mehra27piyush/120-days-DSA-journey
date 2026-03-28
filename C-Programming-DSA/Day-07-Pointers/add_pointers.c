#include <stdio.h>
void add(int *a, int *b){
    printf("%d", *a + *b);
}
int main(){
    int x=5,y=7;
    add(&x,&y);
}