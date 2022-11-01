/*
aBcD
 EfG
  hI
   J
*/
#include<stdio.h>

void main(){
int rows;
printf("ROws: ");
scanf("%d",&rows);
char ch=93+rows;
for(int i=1;i<=rows;i++){
    for(int sp=1;sp<i;sp++){
        printf("  ");
        }
    for(int j=rows;j>=i;j--){
        if(j%2==0){
            printf("%c ",ch);
            }else{
            printf("%c ",ch-32);
            }
            ch++;
        }
        printf("\n");
    }
}
