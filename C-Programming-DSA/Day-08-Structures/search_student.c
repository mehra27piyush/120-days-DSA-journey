#include <stdio.h>
struct Student{ int id; float marks; };
int main(){
    struct Student s[3];
    int key;

    for(int i=0;i<3;i++)
        scanf("%d%f",&s[i].id,&s[i].marks);

    scanf("%d",&key);

    for(int i=0;i<3;i++){
        if(s[i].id==key){
            printf("%d %.2f",s[i].id,s[i].marks);
            return 0;
        }
    }
    printf("Not Found");
}