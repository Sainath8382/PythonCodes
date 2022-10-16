//Array of pointers

#include<stdio.h>
void main(){

int x=10;
int y=20;
int z=30;

int* parr[3]={&x,&y,&z};
printf("%p\n",parr[0]);
printf("%p\n",parr[1]);
printf("%p\n",parr[2]);

printf("%d\n",*parr[0]);
printf("%d\n",*parr[1]);
printf("%d\n",*parr[2]);
}
