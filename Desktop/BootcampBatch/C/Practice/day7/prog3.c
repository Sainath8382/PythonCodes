//strupr and strlwr

#include<stdio.h>
char* mystrupr(char* str){
while(*str!='\0'){
    if(*str>='a' && *str<='z'){
        *str=*str-32;
        }
        str++;
    }
    return *str;
}

char* mystrlwr(char* str){
while(*str!='\0'){
    if(*str>='A' && *str<='Z'){
        *str=*str+32;
        }
        str++;
    }
    return *str;
}

void main(){
char ch[10]={'c','o','r','e','2','w','e','b'};
char ch2[10]={'C','o','R','e'};

mystrupr(ch);
puts(ch);
mystrlwr(ch2);
puts(ch2);
}
