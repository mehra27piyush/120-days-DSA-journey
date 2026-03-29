#include <stdio.h>

struct Address{
    int pincode;
};

struct Student{
    int id;
    struct Address addr;
};

int main(){
    struct Student s;
    scanf("%d%d",&s.id,&s.addr.pincode);

    printf("%d %d",s.id,s.addr.pincode);
}