//predefined length function and own length function

#include<string.h>
#include<stdio.h>
int mystrlen(char* str){
int count=0;
while(*str!='\0'){
    str++;
    count++;
    }
    return count;
}

void main(){
char *str="SHIVAM";
printf("Length is %d\n",mystrlen(str));

int len=strlen(str);
printf("%d\n",len);
}
