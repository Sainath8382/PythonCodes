/*
   d
  cc
 bbb
aaaa
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows? ");
scanf("%d",&rows);
char ch=96+rows;

for(int i=1;i<=rows;i++){
    for(int sp=rows;sp>i;sp--){
        printf("  ");
        }
    for(int j=1;j<=i;j++){
        printf("%c ",ch);
        }
        ch--;
        printf("\n");
    }
}
