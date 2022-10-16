//strcmp implementation
#include<stdio.h>
#include<string.h>
/*
int mystrlen(char *str){
int count=0;

while(*str!='\0'){
    count++;
    str++;
    }
    return count;
}
*/

int mystrcmp(char *str1,char *str2){
int diff=0;
while(*str1!='\0'){
    if(*str1==*str2){
        *str1++;
        *str2++;
        }else{
        diff=*str1-*str2;
        break;
        }
    }
    return diff;
}

void main(){
char *str1="Ashish";
char *str2="Ashish";

int diff=1;
if(strlen(str1)==strlen(str2)){
    diff=mystrcmp(str1,str2);
    }

if(diff==0){
    printf("Strings are equal\n");
    }else{
    printf("Strings are not equal\n");
    }
}

