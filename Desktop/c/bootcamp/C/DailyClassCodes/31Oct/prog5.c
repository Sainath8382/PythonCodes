//wap to free a pointer without using free

#include<stdio.h>
#include<stdlib.h>
void main(){
int *ptr=(int*)malloc(sizeof(int));
*ptr=15;
printf("%d\n",*ptr);

int *ptr2=(int*)realloc(ptr,0);
printf("%d\n",*ptr2);
}
