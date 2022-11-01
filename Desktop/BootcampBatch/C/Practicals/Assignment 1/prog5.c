/*WAP to take no input and print the factors of the number*/

#include<stdio.h>
void main(){

int num;
printf("Enter the number\n");
scanf("%d",&num);
printf("The factors are: \n");
for(int i=1;i<=num;i++){
    if(num%i==0){
        printf("%d\n",i);
        }
    }
}
