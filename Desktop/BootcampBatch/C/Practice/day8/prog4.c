//extern storage class

#include<stdio.h>

void main(){
extern int z;
printf("%d\n",z);
}
//int z=67;

static int z=90;
//error occurs when static and extern are declared for same variable
