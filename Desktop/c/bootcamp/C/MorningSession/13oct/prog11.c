/*factorial of a number
5!=120
*/

#include<stdio.h>
void main(){
int num,fact=1;
//long fact2=1; //for nos with extra range required
printf("Enter no: ");
scanf("%d",&num);

while(num>1){
    fact=fact*num--;
    //fact2=fact2*num--;
    }

    printf("%d\n",fact);
  //  printf("%ld\n",fact2);
}
