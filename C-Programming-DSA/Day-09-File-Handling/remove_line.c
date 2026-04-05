#include <stdio.h>

int main(){
    FILE *fp=fopen("data.txt","r");
    FILE *temp=fopen("temp.txt","w");

    int line=1, del;
    char ch;

    scanf("%d",&del);

    while((ch=fgetc(fp))!=EOF){
        if(line!=del)
            fputc(ch,temp);

        if(ch=='\n')
            line++;
    }

    fclose(fp); fclose(temp);
}