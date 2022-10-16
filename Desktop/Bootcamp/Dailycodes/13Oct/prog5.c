//Implementation of strlen function

#include<stdio.h>
int mystrlen(char* str){

int count=0;
while(*str!='\0'){
    count++;
    str++;
    }
    return count;
}

void main(){
char name[10]={'V','i','r','a','t'};
char *str="MS dhoni";

printf("%d\n",mystrlen(name));
printf("%d\n",mystrlen(str));
}
