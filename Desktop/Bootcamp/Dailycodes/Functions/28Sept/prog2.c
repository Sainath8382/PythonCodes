//Default parameter does not work in C

#include<stdio.h>

void fun(int,int,int);

void main(){
int x=10,y=20,z=30;
fun(x,y,z);
fun(x,y);
}

void fun(int x,int y,int z=50){
printf("%d\n",x+y+z);
}
