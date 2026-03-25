#include <stdio.h>
int main(){
    char str[100];
    int freq[256]={0};

    scanf("%s",str);

    for(int i=0;str[i]!='\0';i++)
        freq[str[i]]++;

    for(int i=0;i<256;i++){
        if(freq[i]>0)
            printf("%c = %d\n",i,freq[i]);
    }
}