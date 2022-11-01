 /*A1B2
  *A1B
  *A1
  *A
  */

 #include<stdio.h>
 void main(){
 int rows;
 printf("Enter rows: ");
 scanf("%d",&rows);

 for(int i=1;i<=rows;i++){
    char ch='A';
    int x=1;

    for(int j=rows;j>=i;j--){
        if(j%2!=0){
            printf("%d ",x);
            x++;
            }
        if(j%2==0){
            printf("%c ",ch);
            ch++;
            }
        }printf("\n");
    }
 }
