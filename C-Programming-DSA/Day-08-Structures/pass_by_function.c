#include <stdio.h>
struct Student{ int id; float marks; };

void display(struct Student s){
    printf("%d %.2f",s.id,s.marks);
}

int main(){
    struct Student s;
    scanf("%d%f",&s.id,&s.marks);
    display(s);
}