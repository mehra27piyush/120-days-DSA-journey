#include <stdio.h>
int main(){
    char str[100];
    scanf("%s",str);

    int i=0, j=0;
    while(str[j]!='\0') j++;
    j--;

    while(i<j){
        if(str[i]!=str[j]){
            printf("Not Palindrome");
            return 0;
        }
        i++; j--;
    }
    printf("Palindrome");
}