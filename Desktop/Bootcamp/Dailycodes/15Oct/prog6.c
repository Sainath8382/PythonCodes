//mystrupr implementation
#include<stdio.h>
char mystrupr(char* str){
while(*str!='\0'){
    if(*str>=97 && *str<=122){
        *str=*str-32;
        }
        str++;
    }
    return *str;
}

void main(){
char str[10]={'c','o','r','e','2','w','e','b','\0'};

mystrupr(str);
puts(str);
}
