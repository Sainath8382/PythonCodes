#include<stdio.h>
void main(){

int x=10;
char ch='A';
double d=21.786;

void *parr[3]={&x,&ch,&d};
printf("%p\n",parr[0]);
printf("%p\n",&parr[1]);
printf("%p\n",parr[2]);

printf("%d\n",*((int*)(parr[0])));
printf("%c\n",*((char*)(parr[1])));
printf("%lf\n",*((double*)(parr[2])));
}
