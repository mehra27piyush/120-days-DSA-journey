#include <stdio.h>

struct Student{
    int id;
    float marks;
};

int main(){
    struct Student s[5];
    int n=5;

    for(int i=0;i<n;i++)
        scanf("%d%f",&s[i].id,&s[i].marks);

    for(int i=0;i<n;i++){
        if(s[i].marks > 50)
            printf("Pass: %d\n",s[i].id);
    }
}