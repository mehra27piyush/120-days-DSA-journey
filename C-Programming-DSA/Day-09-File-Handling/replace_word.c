#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp=fopen("data.txt","r");
    FILE *tempf=fopen("temp.txt","w");

    char word[50], neww[50], str[50];

    scanf("%s%s",word,neww);

    while(fscanf(fp,"%s",str)!=EOF){
        if(strcmp(str,word)==0)
            fprintf(tempf,"%s ",neww);
        else
            fprintf(tempf,"%s ",str);
    }

    fclose(fp); fclose(tempf);
}