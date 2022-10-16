#include<stdio.h>
void main(){
int x=10;
int y=20;

int *ptr1=&x;
int *ptr2=&y;

int temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;

printf("x=%d\n",*ptr1);
printf("y=%d\n",*ptr2);
}
