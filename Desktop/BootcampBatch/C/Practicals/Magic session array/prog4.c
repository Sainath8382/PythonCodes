#include<stdio.h>
void main(){

int ch1='A';
int ch2='C';

int *ptr1=&ch1;
int *ptr2=&ch2;

printf("%p\n",ptr1);
printf("%p\n",ptr2);

int temp=*ptr2-*ptr1+2;
printf("%d\n",temp);

int temp2=ptr1-ptr2;
printf("%d\n",temp2);

printf("%p\n",ptr2+5);
}
