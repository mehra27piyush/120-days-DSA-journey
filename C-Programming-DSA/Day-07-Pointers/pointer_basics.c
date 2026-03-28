#include <stdio.h>
int main(){
    int a = 10;
    int *p = &a;

    printf("Value: %d\n", a);
    printf("Address: %p\n", &a);
    printf("Pointer Value: %d\n", *p);
}