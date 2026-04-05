#include <stdio.h>
int main(){
    FILE *f1=fopen("a.txt","r");
    FILE *f2=fopen("b.txt","r");
    FILE *f3=fopen("c.txt","w");
    char ch;

    while((ch=fgetc(f1))!=EOF) fputc(ch,f3);
    while((ch=fgetc(f2))!=EOF) fputc(ch,f3);

    fclose(f1); fclose(f2); fclose(f3);
}