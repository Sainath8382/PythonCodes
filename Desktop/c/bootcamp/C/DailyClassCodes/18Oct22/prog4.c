//local static variable
#include<stdio.h>
void fun(){

int static y=10;
++y;
printf("%d\n",y);
}

void main(){
fun();
fun();
fun();
}
