#include <stdio.h>
int main(){
    char s1[100], s2[100];
    int freq[256]={0};

    scanf("%s %s",s1,s2);

    for(int i=0;s1[i];i++) freq[s1[i]]++;
    for(int i=0;s2[i];i++) freq[s2[i]]--;

    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
}