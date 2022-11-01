#include<stdio.h>
void main(){

int x=10;

const int *const ptr=&x;
printf("%d\n",x);

x=30;
printf("%d\n",x);
printf("%d\n",*ptr);
}
