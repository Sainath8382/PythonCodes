/* WAP to print all even nos in reverse order and odd numbers in the standard way.Both seperately in a given range*/

#include<stdio.h>
void main(){

int x,y;
printf("Enter the start\n");
scanf("%d",&x);
printf("Enter end \n");
scanf("%d",&y);

for(int i=x;i<=y;i++){
    if(i%2!=0 && i>=0){
        printf("%d\n",i);
        }
    }
for(int i=y;i>=x;i--){
    if(i%2==0){
        printf("%d\n",i);
        }
    }
}
