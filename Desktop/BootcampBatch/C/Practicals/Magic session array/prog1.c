/*
1. WAP to make an array of the table of Given Number
Print the array using a pointer
Input: 2.
Output : 2 4 6 8 10 12 14 16 18 20.
*/

#include<stdio.h>
void main(){

int num;
printf("Enter num: ");
scanf("%d",&num);
int temp=1;

for(int i=0;i<10;i++){
    printf("%d\t",num*temp);
    temp++;
    }
}
