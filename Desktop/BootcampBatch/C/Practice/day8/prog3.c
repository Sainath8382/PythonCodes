//static storage class

#include<stdio.h>
void func(){
static int x=25;
++x;
printf("%d\n",x);
}

void main(){
func();
func();
func();
}
