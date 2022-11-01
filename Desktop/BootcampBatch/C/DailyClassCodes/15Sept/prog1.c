#include<stdio.h>
void main(){
char arr[]={'A','B','C','D'};
char *cptr1=&arr[2];
char *cptr2=&arr[3];

printf("%c\n",*cptr1);
printf("%c\n",*cptr2);
printf("%c\n",*(cptr1+2));
printf("%c\n",*(cptr2+1));
}
