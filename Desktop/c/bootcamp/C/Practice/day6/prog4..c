//string reverse check if both equal or not
#include<stdio.h>
#include<string.h>
char* strrev(char* str){
char *temp=str;

while(*temp!='\0')
    temp++;
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
char str[10]={'K','l','r','a','h','u','l'};
strrev(str);
char str2;

puts(str);
/*
strcpy(str2,str);

if(str==str2){
    printf("String equal\n");
    }
    else{
    printf("Strings not equal\n");
    }
*/
}
