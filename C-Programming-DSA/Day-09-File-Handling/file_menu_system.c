#include <stdio.h>

int main(){
    FILE *fp;
    int choice;
    char data[100];

    do{
        printf("\n1.Write 2.Read 3.Exit\n");
        scanf("%d",&choice);

        if(choice==1){
            fp=fopen("file.txt","w");
            scanf("%s",data);
            fprintf(fp,"%s",data);
            fclose(fp);
        }
        else if(choice==2){
            fp=fopen("file.txt","r");
            fscanf(fp,"%s",data);
            printf("%s",data);
            fclose(fp);
        }

    }while(choice!=3);
}