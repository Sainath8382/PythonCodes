#include<stdio.h>
void main(){

static int x=50;
printf("%d\n",x);
}

extern int x=80;
