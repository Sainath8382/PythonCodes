/*Wap to print divisors of given no
* ip: 10
* op:1,2,5,10
*/

#include<stdio.h>
void main(){
int num;
printf("Enter num:");
scanf("%d",&num);
printf("The divisors are ");
for(int i=1;i<=num;i++){
    if(num%i==0){
        printf("%d\n",i);
        }
    }
}
