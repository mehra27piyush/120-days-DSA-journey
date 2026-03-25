#include <stdio.h>
int main(){
    char s1[100], s2[100];
    scanf("%s %s",s1,s2);

    int i=0;
    while(s1[i] && s2[i]){
        if(s1[i]!=s2[i]){
            printf("Not Equal");
            return 0;
        }
        i++;
    }

    if(s1[i]==s2[i]) printf("Equal");
    else printf("Not Equal");
}