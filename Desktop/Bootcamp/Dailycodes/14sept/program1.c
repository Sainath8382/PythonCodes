/*Addition operation of pointer*/

#include<stdio.h>
void main(){
int x=10;
char ch='A';

int *ptr1= &x;
char *ptr2=&ch;
printf("%p\n",ptr1);
printf("%p\n",ptr2);

printf("%d\n",*ptr1);
printf("%d\n",*ptr2);

}
