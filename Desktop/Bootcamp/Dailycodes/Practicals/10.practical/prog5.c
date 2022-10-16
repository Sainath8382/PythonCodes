#include<stdio.h>
void main(){
int x=10;
int *ptr=&x;
char *cptr=&x;

printf("%d\n",*ptr);    //10
printf("%d\n",*cptr);   //10
}
