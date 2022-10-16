/*WAP to find the sum of numbers that are divisible by 5 in the given range*/

#include<stdio.h>
void main(){

int x,y,sum=0;
printf("Enter start of range\n");
scanf("%d",&x);
printf("Enter end of range\n");
scanf("%d",&y);

if(x>=0 && y>=0){
    for(int i=x;i<=y;i++){
        if(i%5==0){
            sum=sum+i;
            }
        }
    printf("The sum is %d",sum);
}else{
    printf("You entered the negative value\n");
    }
}
