#include<stdio.h>
void main(){
char carr[3]={'A','B','C'};
char *ptr1=&carr[1];
char *ptr2=carr;

char (*ptr3)[3]=&carr;
char carr2[3]={'D','E','F'};
printf("%c\n",**ptr3);
ptr3++;

printf("%c\n",**ptr3);
printf("%c\n",*ptr1);
ptr1++;
printf("%c\n",*ptr1);

printf("%c\n",*((*ptr3)+2));
}
