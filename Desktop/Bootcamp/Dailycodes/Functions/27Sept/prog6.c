//function with 1 or multiple input and 1 output

#include<stdio.h>

void fun(int);

void main(){
fun(10);
fun('A');
}

void fun(int x){
printf("%d\n",x);
}
