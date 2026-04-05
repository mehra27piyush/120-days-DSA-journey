#include <stdio.h>

int main(){
    FILE *fp=fopen("students.csv","a");

    int id;
    float marks;

    scanf("%d%f",&id,&marks);

    fprintf(fp,"%d,%.2f\n",id,marks);

    fclose(fp);
}