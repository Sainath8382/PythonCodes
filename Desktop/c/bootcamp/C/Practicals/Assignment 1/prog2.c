/*WAP to print the character whose ASCII is even*/

#include<stdio.h>
void main(){

int x,y;
printf("Enter start\n");
scanf("%d",&x);
printf("Enter end\n");
scanf("%d",&y);

for(int i=x;i<=y;i++){
    if(i%2==0){
        printf("%d=%c\n",i,i);
        }
    }
}

