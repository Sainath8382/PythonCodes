//Static storage class
//local variable

#include<stdio.h>
void fun(){
int y=10;
++y;
printf("%d\n",y);
}

void main(){
fun();
fun();
fun();
}
