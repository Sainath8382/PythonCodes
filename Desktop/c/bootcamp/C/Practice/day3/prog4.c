//wap to explain array of pointer to an array
#include<stdio.h>
void main()
{
char arr[1]={'a','b','c'};
char arr2[1]={'d','e','f'};
char arr3[1]={'g','h','i'};

int (*carr)[3][3]={arr,&arr2,&arr3};
}
