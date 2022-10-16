//strrev implementation
#include<stdio.h>

char mystrrev(char* str){

char* temp=str;

while(*temp!='\0'){
    temp++;
}
temp--;
char x;
while(str<temp){
    x=*str;
    *str=*temp;
    *temp=x;

    str++;
    temp--;
    }
    return str;
}

void main(){
char str[10]={'S','a','i','n','a','t','h','\0'};

mystrrev(str);
puts(str);
}
