/* 0  3  8
 *15 24 35
 *48 63 80
 */

 #include<stdio.h>
 void main(){
 int rows;
 printf("Enterr rows: ");
 scanf("%d",&rows);
 int x=1;

 for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        printf("%d\t",(x*x)-1);
        x++;
        }printf("\n");
    }
 }
