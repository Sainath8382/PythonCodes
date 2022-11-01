#include<stdio.h>

int *ptr=NULL;
void fun() {
         int x=10;
         ptr = &x;
         printf("%d\n",x);
         printf("%d\n",*ptr);

}

void main(){
         int x = 20;
         printf("%d\n",x);
         fun();
         printf("%d\n",*ptr);
}
