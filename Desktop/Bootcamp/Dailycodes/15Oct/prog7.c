//copy the no of characters given by user into an another string

#include<stdio.h>
char mystrncpy(char* dest,char* src,int no){
while(no!=0){
    *dest=*src;
    dest++;
    src++;
    no--;
    }
    *dest='\0';
    return *dest;
}

void main(){
char *str="Sainath Amle";
int no=5;
char str2[15];

mystrncpy(str2,str,no);
puts(str);
puts(str2);
}
