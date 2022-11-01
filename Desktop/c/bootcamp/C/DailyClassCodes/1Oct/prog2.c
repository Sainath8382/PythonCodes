#include<stdio.h>
void add(int x,int y){
printf("%d\n",x+y);
}

void sub(float a,float b){
printf("%f\n",a-b);
}

void main(){
void (*ptr)(float,float);
ptr=add;
ptr(10,20);

ptr=sub;
ptr(30,10);
}
