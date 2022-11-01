/*1234
 *2345
 *3456
 *4567
 */

 #include<stdio.h>
 void main(){
  int rows;
 printf("Enter rows: ");
 scanf("%d",&rows);
 int num=1;

 for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        printf("%d ",num);
        num++;
        }
        num=num-3;
        printf("\n");
    }
 }
