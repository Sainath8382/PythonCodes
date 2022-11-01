#include<stdio.h>
void main(){

int x=10;
//const int* ptr=&x;
int *const ptr=&x;

printf("%d\n",x);

*ptr=30;
printf("%d\n",x);
}
