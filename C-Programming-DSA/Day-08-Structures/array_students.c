#include <stdio.h>
struct Student{ int id; float marks; };
int main(){
    struct Student s[3];
    for(int i=0;i<3;i++)
        scanf("%d%f",&s[i].id,&s[i].marks);

    for(int i=0;i<3;i++)
        printf("%d %.2f\n",s[i].id,s[i].marks);
}