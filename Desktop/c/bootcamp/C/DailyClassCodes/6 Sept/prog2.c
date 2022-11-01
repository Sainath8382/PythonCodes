 /*ABC
  *DE
  *F
  */

 #include<stdio.h>
 void main(){
 int rows;
 printf("Enter rows: ");
 scanf("%d",&rows);
 char ch='A';

 for(int i=1;i<=rows;i++){
    for(int j=rows;j>=i;j--){
            printf("%c ",ch);
            ch++;
        }printf("\n");
    }
}
