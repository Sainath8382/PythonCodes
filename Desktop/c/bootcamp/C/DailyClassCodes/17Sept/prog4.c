#include<stdio.h>
void main(){
int x=10;
int *iptr=&x;
printf("%d\n",*iptr);

*iptr=30;
printf("%d\n",*iptr);
}
