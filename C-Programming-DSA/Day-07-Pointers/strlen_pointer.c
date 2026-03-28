#include <stdio.h>
int main(){
    char str[100];
    scanf("%s",str);

    char *p = str;
    int len=0;

    while(*p!='\0'){
        len++;
        p++;
    }

    printf("%d",len);
}