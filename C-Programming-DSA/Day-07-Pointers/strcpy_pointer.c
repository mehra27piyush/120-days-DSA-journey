#include <stdio.h>
int main(){
    char s1[100], s2[100];
    scanf("%s",s1);

    char *p1 = s1;
    char *p2 = s2;

    while(*p1){
        *p2 = *p1;
        p1++; p2++;
    }
    *p2 = '\0';

    printf("%s",s2);
}