#include<stdio.h>
void main(){
         int arr[3][3]={11,12,13,14,15,16,17,18,19};
         printf("%p\n",&arr);
         printf("%p\n",arr);
         printf("%p\n",*(arr+0));
         printf("%p\n",*(arr+3));
         printf("%p\n",*(arr+5));
}
