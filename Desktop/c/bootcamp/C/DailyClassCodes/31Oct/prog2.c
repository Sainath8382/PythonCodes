//wap to show the use of dangling pointer

#include<stdio.h>
#include<stdlib.h>
void main(){

int *ptr1=(int*)malloc(sizeof(int));
*ptr1=10;

int *ptr2=ptr1;
printf("%d\n",ptr1);
printf("%d\n",ptr2);
free(ptr1);

printf("%d\n",ptr1);
printf("%d\n",ptr2);
}
