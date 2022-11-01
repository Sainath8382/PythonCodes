/*
*aBcD
*bCdE
*cDeF
*dEfG
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows? ");
scanf("%d",&rows);
char c1='a';
char c2='B';

for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        if(j%2!=0){
            printf("%c ",c1);
            c1+=2;
            }else{
            printf("%c ",c2);
            c2+=2;
            }
        }printf("\n");
         c1-=3;
         c2-=3;
    }
}
