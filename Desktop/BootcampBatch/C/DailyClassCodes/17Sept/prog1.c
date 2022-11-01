#include<stdio.h>
void main() {
int x=10;
int *iptr=&x;
void *vptr=&x;

printf("%p\n",iptr);
printf("%p\n",vptr);
printf("%d\n",*iptr);
//printf("%d\n",*vptr);
printf("%d\n",*((int*)vptr));
}
