/*I H G
 *F E D
 *C B A
 */

 #include<stdio.h>
 void main(){

 int rows;
 printf("Enter rows: ");
 scanf("%d",&rows);

 int ch=73;
 for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        printf("%c ",ch);
        ch--;
    }printf("\n");
    }
 }
