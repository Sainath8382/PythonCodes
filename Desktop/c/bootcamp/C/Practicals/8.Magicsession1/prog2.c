/* WAp to count the no of digits
 *IP: 9421
 *digit:4
 */

 #include<stdio.h>
 void main(){
 int num,sep,count=0;
 printf("ENter num: ");
 scanf("%d",&num);

 while(num>0){
    sep=num%10;
    count+=1;
    num=num/10;
    }
 printf("digits are: %d",count);
 }
