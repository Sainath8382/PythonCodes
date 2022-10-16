/*Wap to print composite nos in a given range
* IP: 1 15
* OP: 4,6,8,9,10,12,14,15
*/

#include<stdio.h>
void main(){
int num1,num2,i;
 printf("ENter num1: ");
 scanf("%d",&num1);
  printf("ENter num2: ");
 scanf("%d",&num2);

for( i=num1;i<=num2;i++){
        int count=0;
    for(int j=1;j<=i;j++){
    if(i%j==0){
        count++;
        }
    }
        if(count>2){
            printf("%d\n",i);
        }

}
}
