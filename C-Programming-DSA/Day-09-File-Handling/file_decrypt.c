#include <stdio.h>

int main(){
    FILE *fp=fopen("enc.txt","r");
    FILE *dec=fopen("dec.txt","w");
    char ch;

    while((ch=fgetc(fp))!=EOF)
        fputc(ch-1,dec);

    fclose(fp); fclose(dec);
}