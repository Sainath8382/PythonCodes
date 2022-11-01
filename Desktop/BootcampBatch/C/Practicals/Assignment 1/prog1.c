/* WAP to see a given no is a multiple of 3 */

#include<stdio.h>
void main(){

int num;
printf("Enter a number for checking\n");
scanf("%d",&num);

if(num%3==0 && num>0){
    printf("%d is a multiple of 3\n");
}else if(num==0){
    printf("You have entered the value zero");
}else if(num<0){
    printf("You entered negative value\n");
    }
}
