//function pointer

#include<stdio.h>
void add(int x,int y){
printf("%d\n",x+y);
}

void sub(int a,int b){
printf("%d\n",a-b);
}

void main(){

void (*ptr) (int,int);
ptr=add;
ptr(10,20);

ptr=sub;
ptr(20,10);
}
