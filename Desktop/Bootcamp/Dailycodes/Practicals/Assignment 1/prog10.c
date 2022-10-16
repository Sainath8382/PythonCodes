/*Wap to print the numbers in a given range and their multiplicative inverse*/

#include<stdio.h>
void main(){
int x,y,rec;
printf("ENter the first no: \n");
scanf("%d",&x);
printf("ENter the second no: \n");
scanf(" %d",&y);

for(int i=x;i<=y;i++){
    rec=1/i;
    printf("%d=%d\n",i,rec);

    }

}
