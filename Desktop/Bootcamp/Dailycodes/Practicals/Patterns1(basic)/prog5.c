/*ABCD
 *BCDE
 *CDEF
 *DEFG
 */
 #include<stdio.h>
 void main(){
  int rows;
 printf("Enter rows: ");
 scanf("%d",&rows);
 char ch='A';

 for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        printf("%c ",ch);
        ch++;
        }
        ch=ch-3;
        printf("\n");
    }
 }
