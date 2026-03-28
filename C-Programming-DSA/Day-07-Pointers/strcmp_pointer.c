#include <stdio.h>
int main(){
    char s1[100], s2[100];
    scanf("%s %s",s1,s2);

    char *p1 = s1;
    char *p2 = s2;

    while(*p1 && *p2){
        if(*p1 != *p2){
            printf("Not Equal");
            return 0;
        }
        p1++; p2++;
    }

    if(*p1 == *p2) printf("Equal");
    else printf("Not Equal");
}