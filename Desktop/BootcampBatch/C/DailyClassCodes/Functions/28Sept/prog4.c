//Call by address

#include<stdio.h>
void swap(int *,int *);

void main(){
int x,y;
printf("ENter values: ");
scanf("%d %d",&x,&y);

printf("%d\n",x);
printf("%d\n",y);
swap(&x,&y);
printf("%d\n",x);
printf("%d\n",y);
}

void swap(int *x,int *y){
printf("%d\n",*x);
printf("%d\n",*y);
int temp;
temp=*x;
*x=*y;
*y=temp;
printf("%d\n",*x);
printf("%d\n",*y);
}
