#include <stdio.h>
struct Student{ int id; float marks; };
int main(){
    struct Student s[3];
    int max=0;

    for(int i=0;i<3;i++)
        scanf("%d%f",&s[i].id,&s[i].marks);

    for(int i=1;i<3;i++)
        if(s[i].marks > s[max].marks)
            max=i;

    printf("%d %.2f",s[max].id,s[max].marks);
}