//strcpy implementation

#include<stdio.h>
int mystrcpy(char *dest,const char* src)
{

while(*src!='\0'){
    *dest=*src;
    src++;
    dest++;
    }
//dest='\0';
}
void main(){

    char *str="HArdik";
    char str2[10];

    puts(str2);
    mystrcpy(str2,str);
    puts(str2);
}
