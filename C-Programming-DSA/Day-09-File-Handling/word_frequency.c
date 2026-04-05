#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp=fopen("data.txt","r");
    char word[50], temp[50];
    int count=0;

    scanf("%s",word);

    while(fscanf(fp,"%s",temp)!=EOF){
        if(strcmp(word,temp)==0)
            count++;
    }

    printf("%d",count);
    fclose(fp);
}