#include<stdio.h>
void main(){
int arr[]={10,20,30,40,50,60};
int *ptr1=&arr[0];
int *ptr2=&arr[4];

ptr1++;
ptr2--;
printf("%d\n",*ptr1);
printf("%d\n",*ptr2);

printf("%d\n",ptr1-ptr2);
}
