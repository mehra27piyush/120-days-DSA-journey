#include <stdio.h>
int isPal(int n, int rev){
    if(n==0) return rev;
    return isPal(n/10, rev*10 + n%10);
}
int main(){
    int n; scanf("%d",&n);
    if(n == isPal(n,0)) printf("Palindrome");
    else printf("Not Palindrome");
}