/*1 3 5
 *7 9
 *11
 */

 #include<stdio.h>
 void main(){
 int rows;
 printf("Enter rows: ");
 scanf("%d",&rows);
 int x=1;

 for(int i=1;i<=rows;i++){
 for(int j=rows;j>=i;j--){
        printf("%d\t",x);
        x+=2;
        }
        printf("\n");
    }
 }
