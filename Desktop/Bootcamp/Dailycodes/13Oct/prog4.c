//strlen function

#include<stdio.h>
#include<string.h>

void main(){

/*
char arr[10];
printf("ENter string: ");
gets(arr);

int len=strlen(arr);
printf("%d\n",len);
*/

char name[10]={'V','i','r','a','t','\0'};
char *str="KL rahul";

int len1=strlen(name);
printf("%d\n",len1);

int len2=strlen(str);
printf("%d\n",len2);
}
