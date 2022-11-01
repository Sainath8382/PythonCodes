/*Wap to calculate factorial of a given no*/

#include<stdio.h>
void main(){

int num,fact=1;
printf("Enter the number:\n");
scanf("%d",&num);

while(num>0){
    fact=fact*num;
    num--;
    }
printf("The factorial is: %d\n",fact);
}
