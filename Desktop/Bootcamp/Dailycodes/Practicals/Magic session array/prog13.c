/*
13. WAP to print different datatype of elements using Void pointer
int , char , float , double
*/

#include<stdio.h>
void main(){

int x=10;
char ch='A';
float f=20.54;
double d=45.6789;

void *ptr1=&x;
printf("%d\n",*((int*)ptr1));

void *ptr2=&ch;
printf("%c\n",*((char*)ptr2));

void *ptr3=&f;
printf("%f\n",*((float*)ptr3));

void *ptr4=&d;
printf("%lf\n",*((double*)ptr4));
}
