#include <stdio.h>

int main(){
    FILE *fp=fopen("data.txt","r");

    fseek(fp,0,SEEK_END);
    int size=ftell(fp);

    printf("%d bytes",size);

    fclose(fp);
}