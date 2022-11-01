/*
         1
     4   7
10  13  16
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows? ");
scanf("%d",&rows);
int num=1;

for(int i=1;i<=rows;i++){
    for(int sp=rows;sp>i;sp--){
        printf("\t");
        }
    for(int j=1;j<=i;j++){
        printf("%d\t",num);
        num+=rows;
        }
        printf("\n");
    }
}
