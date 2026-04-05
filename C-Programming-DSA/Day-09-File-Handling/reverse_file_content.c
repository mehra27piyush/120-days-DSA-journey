#include <stdio.h>

int main(){
    FILE *fp=fopen("data.txt","r");

    fseek(fp,0,SEEK_END);
    int pos=ftell(fp);

    while(pos--){
        fseek(fp,pos,SEEK_SET);
        printf("%c",fgetc(fp));
    }

    fclose(fp);
}