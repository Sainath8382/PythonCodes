#include<stdio.h>
void add(int a,int b){
printf("%d\n",a+b);
printf("%d\n",a+b);
printf("%d\n",a+b);
}

void main(){
void (*ptr)(int,int);

ptr=add;
ptr(10,20);
printf("%p\n",ptr);
ptr++;
printf("%p\n",ptr);
ptr(30,30);
}
