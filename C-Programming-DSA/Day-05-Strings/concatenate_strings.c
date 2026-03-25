#include <stdio.h>
int main(){
    char s1[100], s2[100];
    scanf("%s %s",s1,s2);

    int i=0,j=0;
    while(s1[i]!='\0') i++;

    while(s2[j]!='\0'){
        s1[i]=s2[j];
        i++; j++;
    }
    s1[i]='\0';

    printf("%s",s1);
}