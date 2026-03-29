#include <stdio.h>
struct Emp{ int id; float sal; };
int main(){
    struct Emp e;
    scanf("%d%f",&e.id,&e.sal);

    e.sal += 1000;

    printf("%.2f",e.sal);
}