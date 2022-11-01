//register storage class
//if adress is accessed then error occurs

#include<stdio.h>
void main(){
register int y=90;

printf("%d\n",y);
printf("%p\n",&y);
}
