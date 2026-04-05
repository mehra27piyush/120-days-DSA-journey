#include <stdio.h>

int main(){
    FILE *fp=fopen("data.txt","r");
    FILE *enc=fopen("enc.txt","w");
    char ch;

    while((ch=fgetc(fp))!=EOF)
        fputc(ch+1,enc);

    fclose(fp); fclose(enc);
}