/*WAP to calculate the LCM of 2 nos*/

#include<stdio.h>
void main(){
int n1,n2,max;
printf("ENter num1: \n");
scanf("%d",&n1);
printf("ENter num2: \n");
scanf("%d",&n2);

if(n1>n2){
    max=n1;
    }else if(n2>n1){
    max=n2;
    }

    while(1){
    if(max%n1==0 && max%n2==0){
        printf("The Lcm is %d\n",max);
        break;
        }max++;
    }
}
