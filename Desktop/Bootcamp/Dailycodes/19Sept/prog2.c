#include<stdio.h>
void main(){

int arr1[]={10,20,30,40,50};
int arr2[]={60,70,80,90,100};
int *ptr1=arr1;
int *ptr2=&arr1;

printf("%d\n",*ptr1);
printf("%d\n",*ptr2);

ptr1++;
ptr2++;
printf("%d\n",*ptr1);
printf("%d\n",*ptr2);
}
