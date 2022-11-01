/*2  5  10
 *17 26 37
 *50 65 82
 */

 #include<stdio.h>
 void main(){
 int rows;
 printf("Enter rows: ");
 scanf("%d",&rows);
 int num=1;

 for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
        printf("%d\t",(num*num)+1);
        num++;
        }printf("\n");
    }
 }
