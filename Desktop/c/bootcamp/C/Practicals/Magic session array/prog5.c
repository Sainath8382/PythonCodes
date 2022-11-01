#include<stdio.h>
void main(){

         int arr[]={10,20,30,40,50};
         int *ptr1=&arr[0];

         printf("%p\n",ptr1);
         printf("%d\n",*(ptr1++));

         ptr1++;

         printf("%d\n",*(++ptr1));
         printf("%p\n",ptr1);
}
