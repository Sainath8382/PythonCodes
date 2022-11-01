#include<stdio.h>
void main(){

int x=10;
int y=20;

const int* const ptr=&x;
printf("%d\n",x);

*ptr=30;
ptr=&y;
}
