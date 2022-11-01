//Pointer to an array
#include<stdio.h>
void funarr(int (*ptr)arr[]){

printf("%p\n",arr);
}

void main(){
int arr1[]={10,20,30,40};
funarr(&arr1);
}
