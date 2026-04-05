#include <stdio.h>
struct Student{
    int id;
    float marks;
};

int main(){
    FILE *fp=fopen("student.txt","w");
    struct Student s;

    scanf("%d%f",&s.id,&s.marks);
    fprintf(fp,"%d %.2f",s.id,s.marks);

    fclose(fp);
}