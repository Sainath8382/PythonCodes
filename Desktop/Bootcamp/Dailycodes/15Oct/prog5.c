//mystrlwr implementation

#include<stdio.h>
char mystrlwr(char* str){
while(*str!='\0'){
    if(*str>=65 && *str<=90){
        *str=*str+32;
        }
        str++;
    }
    return *str;
}

void main(){
char str[10]={'S','A','i','n','A','T','H','\0'};

mystrlwr(str);
puts(str);
}
