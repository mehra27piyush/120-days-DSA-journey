#include <stdio.h>
struct Emp{ int id; float sal; };
int main(){
    struct Emp e;
    scanf("%d%f",&e.id,&e.sal);
    printf("%d %.2f",e.id,e.sal);
}