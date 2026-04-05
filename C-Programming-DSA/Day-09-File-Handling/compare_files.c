#include <stdio.h>
int main(){
    FILE *f1=fopen("a.txt","r");
    FILE *f2=fopen("b.txt","r");
    char c1,c2;

    while(1){
        c1=fgetc(f1);
        c2=fgetc(f2);

        if(c1!=c2){
            printf("Different");
            return 0;
        }
        if(c1==EOF && c2==EOF) break;
    }
    printf("Same");
}