//own strcpy function and concat it
#include<stdio.h>
char* mystrcpy(char* dest,char* src){

while(*src!='\0'){
    *dest=*src;
    *dest++;
    *src++;
    }
*dest='\0';
return dest;
}

char* mystrcat(char *str1,char *str2){
while (*str1!='\0'){
    str1++;
}

while(*str2!='\0'){
    *str1=*str2;
    *str1++;
    *str2++;
    }
    *str1='\0';
    return str1;
}

void main(){
char* str="Samson";
char str2[10];

mystrcpy(str2,str);
puts(str2);

char str3[10]={'R','a','v','i'};
mystrcat(str2,str3);
puts(str2);
}
